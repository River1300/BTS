/* ---------- JIRA 프로젝트( Project )와 이슈( Issue ) ---------- */

/*
[프로젝트( Project )] : 이슈를 모아둔 집합

	a. JIRA에서 프로젝트는 특정 작업 또는 이슈를 관리하기 위한 공간이다.
	b. 프로젝트는 이슈들의 집합으로 비슷한 유형의 작업을 그룹화하고 관리할 때 사용된다. 
	c. 신규 프로젝트가 
			한 프로젝트가 될 수 도 있으며 
			팀 단위의 프로젝트가 될 수 도 있다. 
	d. 프로젝트에서는 프로젝트에 대한 설정, 이슈 우선순위, 버전 관리 등을 관리한다.
	e. 개발팀 프로젝트에서 개발팀이 수행할 업무 리스트를 확인 할 수 있다.
	f. 이때, 수행할 각 업무가 [이슈]
*/

/*
[이슈( Issue )] : 버그, 요구 사항, 작업 등 프로젝트에서 처리해야 할 작업 단위

	a. 흔히 이슈라 하면 문제가 발생했다고 생각할 수 있으나 Jira 에서는 모든 각각의 업무를 이슈라고 말한다.
	b. 이슈는 프로젝트 관리를 위해 등록되는 
			작업, 
			버그, 
			요구사항 등의 단위이며 
			고유한 ID, 상태, 우선순위, 담당자, 기간 등의 정보를 가지고 있다.
	c. 업무마다 성격이 다르듯 이슈에는 타입이 존재한다. 이슈 타입은 이슈의 종류를 나타낸다.
	d. 이슈 타입의 경우 업무 성격에 따라 커스텀 생성( 사용자 정의 )이 가능하다. 
			점검 업무, 기획 등
	e. 이슈는 JIRA에서 추적하려는 작업 또는 문제를 나타낸다. 
	f. 주요 이슈 타입으로는 
			버그 : 소프트웨어의 오류, 
			작업 : 요구 사항을 구현하기 위한 작업, 
			새로운 기능 요청 : 사용자에게 제공할 기능, 
			개선 사항 등이 있다.
	g. 이슈는 열림, 진행 중, 완료 등의 상태를 가진다.
*/

/*
[화면( Screen )] : 사용자 인터페이스의 한 부분을 가리킨다.

	a. 화면은 이슈를 생성, 편집, 보기, 관리하는 데 필요한 필드를 구성하는 것을 의미한다.
	b. 화면은 이슈 유형과 프로젝트에 따라 다를 수 있다.
	c. 프로젝트 요구 사항에 따라 화면을 사용자 지정할 수 있다.
*/

/*
[필드( Field )] : 이슈를 생성하거나 수정할 때 정보를 입력하고 표시하는 데 사용되는 요소 
	
	a. Summary, Components 등 각 요소가 필드로 실질적인 데이터다.
	b. 이때, 업무 수행 시 참고사항 등 추가적으로 작성이 필요한 내용이 있을 수 있다.
			그러한 경우 이미지의 개발자 체크리스트처럼 커스텀 필드를 추가하여 프로젝트 설정에 추가한다.
			필드가 화면에 추가되면 이슈에 해당 내용을 작성하고 확인할 수 있다.
*/

/*
[업무흐름도( Workflow )] : 이슈가 어떻게 처리되고 진행되는지를 정의한 것

	a. 각 업무 별로 처리 과정이 있다.
			이슈가 처음 생성되면 "열림" 상태에서 시작하고, 
			"진행 중" 상태로 넘어가고, 
			마침내 "완료" 상태로 이동하는 과정을 워크플로우로 정의할 수 있다.
	b. 업무흐름도는 이슈가 수행 / 처리되는 흐름이다.
*/

/*
[상태( State )] : 이슈의 현재 상태를 나타낸다. 

	a. 일반적인 상태로는 "열림," "진행 중," "완료"가 있으며, 프로젝트에 따라 추가적인 상태를 정의할 수 있다.
	b. 현재 이슈가 검토 상태인지 완료 상태인지 파악하여 업무를 처리한다.
			이미지와 같이 이슈 상태를 알 수 있으며 다음 상태로 이슈 전환하거나 완전히 이슈를 종료시킬 수 있다.
*/

/*
[쿼리( Query )] : JIRA의 고급 검색 기능
	
	a. JIRA Query Language (JQL)을 사용하여 이슈를 검색하고 필터링할 수 있다.
	b. 여러 개의 조건을 결합하여 검색 조건을 지정할 수 있다.
	c. SQL과 유사한 구문을 사용하여 필터를 생성하며, 각 검색 조건을 쉼표, 공백 또는 AND, OR 등의 논리 연산자로 구분합니다.
*/

/*
[필터( Filter )] : 특정 검색 조건에 따라 이슈를 선택하는 데 사용

	a. Jira에서 Filter는 이슈를 검색하고, 특정 조건에 맞는 이슈를 조회하기 위한 쿼리를 말한다. 
	b. Filter를 사용하면 사용자는 
			특정 프로젝트, 
			이슈 유형, 
			우선순위, 
			상태, 
			담당자 등 다양한 조건을 이용해 원하는 이슈를 검색할 수 있다.
	c. Filter를 사용하면 이슈를 검색하는 데 필요한 시간을 크게 줄일 수 있으며, 원하는 정보를 더 빠르고 정확하게 얻을 수 있다. 
	d. 또한 Filter는 대시보드를 만들 때도 사용되며, Export 하거나 Bulk Change( 일괄 변경 ) 등이 가능하다.
*/

/*
[요소( Component )] : 이슈를 보다 구체적으로 분류하기 위한 기능

	각 구성 요소는 독립적으로 개발 및 관리될 수 있으며, 각각을 Jira Component로 나타낼 수 있습니다.
	Jira에서 Component를 사용하면 사용자는 
			구성 요소별로 이슈를 추적하고, 
			구성 요소에 대한 보고서를 생성하고, 
			구성 요소별로 이슈를 필터링하여 검색할 수 있다. 
	Component는 프로젝트별로 관리되며, 각 프로젝트에서는 다른 Component 목록을 가질 수 있다.

	간단하게, 구성요소는 프로젝트 내에서 이슈를 한번 더 세분화 할 수 있는 방법이다.
	이때, 구성요소를 활용하여 이슈 그룹화가 가능하며 구성요소로 이슈를 필터링하여 관리한다.
*/