pipeline {
  agent {
    label 'windows'
  }

  stages {
    stage('SCM') {
      steps {
        checkout scm
      }
    }
    stage('SonarQube Analysis') {
      steps {
        script {
          def msbuildHome = tool name: 'Default MSBuild'
          def scannerHome = tool name: 'SonarScanner for .NET'
          
          echo "MSBuild Home: ${msbuildHome}"
          echo "Scanner Home: ${scannerHome}"
          
          withSonarQubeEnv('sq1') {
            bat "SonarScanner.MSBuild.exe begin /k:\"MultipleLanguage\""
            bat "MSBuild.exe /t:Rebuild"
            bat "SonarScanner.MSBuild.exe end"
          }
        }
      }
    }
  }
}