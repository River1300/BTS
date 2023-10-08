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
나에게 할당됨(해결되지 않음) : 사용자에게 할당 된 모든 이슈가 이 섹션 아래에 표시된다. 버그가보고 된 시점이 버그 요약 아래에 표시되고 고유 번호가 자동으로 표시된다.
	작업 목록 표시: 현재 사용자에게 할당된 모든 이슈가 나열된다. 이슈의 제목, 상태, 우선 순위 및 마감일과 같은 정보를 볼 수 있다.
	작업 상태 업데이트: 사용자는 이 섹션에서 할당된 이슈의 상태를 업데이트하거나 주석을 추가하여 작업 진행 상황을 기록할 수 있다.
	우선 순위 관리: 작업의 우선 순위를 조정하거나 중요한 작업에 집중할 수 있다.
	알림 및 통지: MantisBT 설정에 따라, 사용자에게 새로운 할당 또는 이슈 업데이트와 관련한 알림 및 이메일 통지를 제공한다.

할당되지 않음 : 관련된 사람에게 할당하기 위해 보류중인 모든 문제가 표시된다.

내가 보고한 이슈 : 사용자가 보고 한 모든 문제가 이 섹션 아래에 표시된다.

최근에 변경된(30일) :  30 일의 타임 라인 동안 수정 된 모든 문제가 이 섹션 아래에 표시된다.

내가 모니터링 중 : 문제 신고, 사용자 초대와 같은 다양한 링크가 제공된다. 사용자는 문제보고 버튼을 직접 클릭 한 다음 문제보고 페이지로 이동할 수 있다. 문제를 보거나 보고 할 프로젝트를 변경할 수 있다.

타임 라인 : 프로젝트와 관련된 모든 최근 업데이트가 표시된다. 문제가 새로 보고 되었는지, 종결 되었는지 또는 기존 버그의 업데이트 여부에 관계없이 버그와 관련된 모든 활동이 로그인되어이 섹션 아래에 표시된다.
*/





/* ----- 4. 이슈 보고하기 ----- */

/*
분류(카테고리) : 이슈를 보고할 프로젝트를 선택한다.

재발생 가능성 : 보고 된 버그의 재현 가능 여부를 정의한다. Mantis 버그 추적기는 이 범주에서 기본 옵션을 제공한다.
	시도하지 않은 : 버그 재현을 시도하지 않은 경우이 옵션을 선택하십시오.
	항상 : 반복 할 때마다 버그를 재현 할 수있는 경우이 옵션을 선택하십시오.
	무작위 : 오류가 무작위로 발생하는 경우이 옵션을 선택하십시오.
	재현 할 수 없음 : 사용 된 시나리오에서 예기치 않은 결과가 발생하여 더 이상 버그가 발생하지 않는 경우이 옵션을 선택하십시오.
	때때로 : 반복 중에 버그가 몇 번 발생하는 경우이 옵션을 선택하십시오.
	해당 없음

심각도 : 
	새 기능 요구
	하찮은
	오타
	기능 개선
	보통
	주요한
	충돌
	장애
*/





/* ----- 5. 프로젝트 만들기 ----- */

/*
관리에 들어간다.
프로젝트 관리에 들어간다.
새 프로젝트 생성
*/

/*
관리에 들어간다.
사용자 관리에 들어간다.
새 계정 만들기
액세스 수준 드롭 다운에는 기본적으로 사용할 수있는 다양한 옵션이 있다.
	뷰어
	보고자
	업데이터
	개발자
	매니저
	관리자
*/





/* ----- 6. 이메일 알림 ----- */

/*
소프트웨어 개발 중에 가장 큰 과제 중 하나는 변경 사항이나 보고 된 버그에 대해 팀에 계속 알리는 것이다. 
MantisBT는 새로운 버그가 보고되거나 기존 버그가 변경된 경우 관련 사람에게 이메일 알림을 트리거한다.

C:\xampp\htdocs\mantis\config( 맨티스 설치 폴더에서 config 폴더 )
	=> config_inc

메모장에서 config_inc.php를 열고 다음 코드를 추가합니다.
$g_phpMailer_method = PHPMAILER_METHOD_SMTP; $g_smtp_host = ‘smtp.gmail.com'; $g_smtp_port = ‘465'; $g_smtp_connection_mode = ‘ssl'; $g_smtp_username = ‘softwaretestinghelp@gmail.com'; $g_smtp_password = ‘xxxx'; $g_administrator_email = ‘softwaretestinghelp@gmail.com'; $g_webmaster_email = ‘softwaretestinghelp@gmail.com'; $g_from_email = ‘softwaretestinghelp@gmail.com'; $g_return_path_email = ‘softwaretestinghelp@gmail.com'; $g_default_timezone = ‘UTC'; $g_log_level = LOG_EMAIL | LOG_EMAIL_RECIPIENT; $g_log_destination = ‘file:D:mantisbt.log';
파일 저장
관리자 자격 증명을 사용하여 MantisBT에 로그인
사용자 초대를 클릭하십시오.
사용자 생성
관련 사람에게 이메일이 트리거됩니다.
*/