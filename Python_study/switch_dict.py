# 模拟从设备获取的BGP邻居摘要信息（实际场景中可从日志文件或SSH连接读取）
bgp_summary = """IPv4 Unicast Summary:
BGP router identifier 33.0.1.146, local AS number 64770 vrf-id 0
BGP table version 420
RIB entries 29, using 5568 bytes of memory

Neighbor                AS   MsgRcvd   MsgSent OutQ        State  Up/Down   PfxRcd   PfxSnt
--------------- ---------- --------- --------- ---- ------------ -------- -------- --------
100.86.0.2           64870     26243     26283    0  Established 19:09:09       14       15
100.86.0.6           64870     26242     26278    0  Established 19:09:09       14       15
100.86.0.50          64870     26244     26284    0  Established 19:09:09       14       15
100.86.0.54          64870     26242     26278    0  Established 19:09:09       14       15
100.86.162.1         64870         0         0    0       Active    never        0        0
100.86.163.1         64870         0         0    0       Active    never        0        0
# 省略其他Active状态的邻居...
Number of neighbors 36  (Established 4)"""


def parse_established_bgp_neighbors(bgp_output):
    """
    解析BGP摘要信息，提取状态为Established的邻居详情

    参数:
        bgp_output: 原始的BGP summary输出字符串

    返回:
        字典，key为邻居IP，value为该邻居的详细信息字典
    """
    # 初始化结果字典
    established_neighbors = {}

    # 按行分割输出内容
    lines = bgp_output.split('\n')

    # 找到表头行，确定数据起始位置
    header_line = None
    for i, line in enumerate(lines):
        if 'Neighbor' in line and 'State' in line and 'PfxSnt' in line:
            header_line = i
            break

    if header_line is None:
        print("未找到BGP表头信息，解析失败")
        return established_neighbors

    # 从表头下一行开始解析数据
    for line in lines[header_line + 1:]:
        # 跳过空行和汇总行
        line = line.strip()
        if not line or 'Number of neighbors' in line:
            continue

        # 按空格分割（处理多个空格的情况）
        parts = line.split()
        # 确保数据字段完整（正常应为9个字段）
        if len(parts) < 9:
            continue

        # 提取各字段信息
        neighbor_ip = parts[0]
        as_number = parts[1]
        msg_rcvd = parts[2]
        msg_sent = parts[3]
        outq = parts[4]
        state = parts[5]
        # 处理State可能包含空格的情况（如'Established'是一个词，但若有'Idle (Admin)'则需合并）
        # 这里根据示例场景简化处理，假设State是单个词
        up_down = parts[6]
        pfx_rcd = parts[7]
        pfx_snt = parts[8]

        # 筛选状态为Established的邻居
        if state == 'Established':
            established_neighbors[neighbor_ip] = {
                'AS': int(as_number),
                'MsgRcvd': int(msg_rcvd),
                'MsgSent': int(msg_sent),
                'OutQ': int(outq),
                'State': state,
                'Up/Down': up_down,
                'PfxRcd': int(pfx_rcd),
                'PfxSnt': int(pfx_snt)
            }

    return established_neighbors


# 执行解析
result = parse_established_bgp_neighbors(bgp_summary)

# 打印结果
print("状态为Established的BGP邻居信息：")
for ip, details in result.items():
    print(f"\n邻居IP: {ip}")
    for key, value in details.items():
        print(f"  {key}: {value}")

# 也可直接打印原始字典
print("\n原始字典格式：")
import pprint
pprint.pprint(result)