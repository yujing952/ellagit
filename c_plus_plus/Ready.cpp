#include <iostream>
using namespace std;



pipeline {
    agent any
    stages {
        stage('Stage 1') {
            steps {
                script {
                    cleanWs()
                    catchError {
                        sh 'echo "Running Stage 1"'
                    }
                }
            }
        }
        stage('Stage 2 and 3') {
            parallel {
                stage('Stage 2') {
                    steps {
                        script {
                            catchError {
                                sh 'echo "Running Stage 2"'
                            }
                        }
                    }
                }
                stage('Stage 3') {
                    steps {
                        script {
                            catchError {
                                sh 'echo "Running Stage 3"'
                            }
                        }
                    }
                }
            }
        }
    }
    post {
        always {
            echo "Current time: ${currentBuild.getTime()}"
            echo "Workspace: ${env.WORKSPACE}"
            echo "Jenkins URL: ${env.BUILD_URL}"
            echo "Build result: ${currentBuild.result}"
        }
    }
}


node {
    try {
        cleanWs()
        
        stage('Stage 1') {
            sh 'echo "Running Stage 1"'
        }
        
        parallel (
            "Stage 2": {
                stage('Stage 2') {
                    sh 'echo "Running Stage 2"'
                }
            },
            "Stage 3": {
                stage('Stage 3') {
                    sh 'echo "Running Stage 3"'
                }
            }
        )
    } catch (Exception e) {
        error "脚本执行失败: ${e.message}"
    } finally {
        echo "Current time: ${new Date()}"
        echo "Workspace: ${env.WORKSPACE}"
        echo "Jenkins URL: ${env.BUILD_URL}"
        echo "Build result: ${currentBuild.result}"
    }
}