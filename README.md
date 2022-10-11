# report vending-machine
### 과제
#### 자판기 프로그램을 만들어라
### 제출 2022.10.12
### 상세
#### 
* Qt Creator > File > New File or Project > Application > Qt Widgets Application을 선택한다.


+ Base class는 QMainWidow가 아닌 QWidget으로 하여 프로젝트를 생성한다.


+ widget.ui를 더블클릭하여 lcdNumber를 올려 놓는다.


+ 10, 50, 100, 500 원 PushButton을 만들어 눌렀을 경우 금액이 올라가게끔 한다.


+ Coffee(100), Tea(150), Milk(200) PushButton을 만들어 눌렀을 경우 금액이 차감되게 한다.


+ 돈의 금액에 따라 음료 버튼의 활성화, 비활성화를 설정한다.



+ Reset 버튼을 누르면 잔돈(500원 몇 개, 100원 몇 개, ...)라는 정보를 QMessageBox 클래스를 활용하여 보여 준다.
