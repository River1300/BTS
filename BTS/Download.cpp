/* ---------- Mantis Download ---------- */

/* 필요한 Software */

/*
https://www.apachefriends.org/download.html
	XAMPP( 크로스 플랫폼, 아파치, MySQL, PHP, Perl )는 웹 개발 및 웹 서버 환경을 구축하기 위한 오픈 소스 소프트웨어 패키지다. 
	XAMPP는 주로 개발자와 웹 개발 팀에게 웹 애플리케이션 및 웹 사이트를 개발, 테스트 및 실행하는 데 사용된다. 
	이것은 Windows, macOS, Linux 등 다양한 운영 체제에서 사용할 수 있으며, 각 운영 체제에 대한 설치 파일을 제공한다.

https://mantisbt.org/download.php
	MantisBT는 버그 추적 및 이슈 관리를 위한 오픈 소스 이슈 트래킹 시스템이다. 
	이것은 소프트웨어 개발 프로젝트에서 버그를 식별하고 추적하며 문제를 해결하는 데 사용된다. 
*/





/* ----- 1. 설치 ----- */

/*
1. XAMPP for Windows 를 디폴트로 설치한다.( 설치시 UAC 관련 경고 창이 뜨지만, 무시 )

	a. XAMPP Control Panel 에서 Apache, MySQL을 [Start] 한다.
		=> http://localhost/phpmyadmin/ 으로 접속하여, MySQL이 정상 설치되었음을 확인한다.
*/

/*
2. 다운받은 MantisBT 소스를 “C:\xampp\htdocs\mantis” 에 전부 푼다.
*/

/*
3. 웹브라우저에서 http://localhost/mantis/admin/install.php 를 실행한다.

	a. Type of Database( Mantis가 사용할 DB ) => MySql Improve ( default )
	b. Hostname (for Database Server) => localhost
	c. Username (for Database)( Mantis에서 사용할 DB접속 user account (default는 root) ) 
		=> root 이외 사용할 경우, 사전에 유저 생성 & 권한 모두 설정할 것.
	d. Password (for Database)( Mantis에서 사용할 DB 유저의 password ) => ( default는 공백 )
	e. Database name (for Database)( Mantis가 사용할 database 이름 ) => 알아서 하셈
	f. Admin Username (to create Database)( MySQL의 관리자 계정 ) => 예, root
	g. Admin Password (to create Database)( MySQL의 관리자 password ) => 알아서 하셈
	h. 위의 설정을 끝낸 뒤에
		=> Attempt Installation 에서 “Install/Upgrade Database”를 실행하여, 모든 항목이 “GOOD(초록색)“으로 나와야 한다.

=> Password (for Database), 
=> Admin Password (to create Database) 항목을 공백으로 했을 경우, 
	=> 설치 후 Setting Database Password, Setting Admin Password 의 결과가 ‘Possible Problem’ 으로 나올 수 있으나 정상이다. 
	=> 하단 “Installing Database” 의 하위 항목들만 모두 ‘GOOD’ 으로 나오면 된다.

=> 여기서 오류가 발생하면, XAMPP Control Panel을 실행하여 Apache, MySQL이 기동되어 있는지 확인한다. 
	=> XAMPP Control Panel 에서 Apache, MySQL 서버를 다시 시작한다. (Stop -> Start))
*/

/*
4. 웹브라우저에서 http://localhost/mantis/ 를 실행한다. (초기 계정 : 이름 administrator / 비밀번호 root)
*/





/* ----- 2. 계정 관리 ----- */

/*
1. 좌측 화면에 있는 [관리] 버튼 선택
2. 화면 상단에 있는 [사용자 관리] 버튼 선택
3. 사용자 이름 목록에서 이름과 이메일을 변경할 이름을 선택
4. 정보 변경 이후 [정보 갱신] 버튼 선택
*/





/* ----- 3. 내 페이지 ----- */

/*

*/