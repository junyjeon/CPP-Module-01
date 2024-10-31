# CPP Module 01

<div align="center">
  <img src="assets/13_cpp_module_01_review.jpg" alt="CPP Module 01 Review" width="800"/>
  
  [![42 Score](https://img.shields.io/badge/Score-85%2F100-success?style=for-the-badge&logo=42)](https://github.com/your-username/CPP-Module-01)
</div>

## Table of Contents
- [About](#about)
- [Requirements](#requirements)
- [Implementation](#implementation)
  - [ex00: BraiiiiiiinnnzzzZ](#ex00-braiiiiiinnnzzzz)
  - [ex01: Moar brainz!](#ex01-moar-brainz)
  - [ex02: HI THIS IS BRAIN](#ex02-hi-this-is-brain)
  - [ex03: Unnecessary violence](#ex03-unnecessary-violence)
  - [ex04: Sed is for losers](#ex04-sed-is-for-losers)
  - [ex05: Harl 2.0](#ex05-harl-20)
  - [ex06: Harl filter](#ex06-harl-filter)

### 🗣️ About
C++의 메모리 관리와 참조자를 학습하는 두 번째 C++ 모듈입니다.

• 학습 목표
  - 메모리의 스택과 힙 영역 이해
  - new와 delete를 통한 메모리 관리
  - 포인터와 참조자의 차이점 파악
  - 파일 스트림 활용 방법 습득
  - switch문 활용

• 주요 개념
  - Memory allocation (new/delete)
  - References vs Pointers
  - File streams
  - Classes and objects
  - Member pointers
  - Switch statement

### Requirements
• 컴파일러
  - c++ (clang++)
  - -Wall -Wextra -Werror
  - -std=c++98

• 금지 사항
  - STL 사용 금지
  - <string.h> 대신 <string> 사용
  - printf 대신 cout 사용
  - 전역 변수 사용 금지

### Implementation

#### ex00: BraiiiiiiinnnzzzZ
• 요구사항
  - Zombie 클래스 구현
  - newZombie와 randomChump 함수 구현
  - 힙과 스택에 좀비 생성

• 목표
  - new/delete를 통한 메모리 관리 학습
  - 스택과 힙의 차이점 이해
  - 객체의 생성과 소멸 시점 파악

• 클래스 구조
```cpp
class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    
    void announce(void);
};

Zombie* newZombie(std::string name);      // 힙에 생성
void randomChump(std::string name);        // 스택에 생성
```

• 구현 예시
```cpp
// Zombie 생성자/소멸자
Zombie::Zombie(std::string name) : name(name) {
    std::cout << this->name << " is born!" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->name << " is dead!" << std::endl;
}

// announce 메서드
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// 힙에 좀비 생성
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

// 스택에 좀비 생성
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}
```

• 학습 포인트
  - new 연산자로 힙 메모리 할당
  - delete로 메모리 해제
  - 스택 프레임과 객체 수명
  - 생성자/소멸자 호출 순서

#### ex02: HI THIS IS BRAIN
• 요구사항
  - 문자열 변수 선언
  - 해당 변수의 포인터와 참조자 선언
  - 세 가지 방식으로 메모리 주소와 값 출력

• 목표
  - 포인터와 참조자의 차이점 이해
  - 메모리 주소와 참조의 개념 파악
  - 변수 접근 방식 비교

• 구현 예시
```cpp
int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;
    
    // 메모리 주소 출력
    std::cout << "Memory address:" << std::endl;
    std::cout << "&string    : " << &string << std::endl;
    std::cout << "stringPTR  : " << stringPTR << std::endl;
    std::cout << "&stringREF : " << &stringREF << std::endl;
    
    // 값 출력
    std::cout << "\nValue:" << std::endl;
    std::cout << "string    : " << string << std::endl;
    std::cout << "*stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF : " << stringREF << std::endl;
    
    return 0;
}
```

• 학습 포인트
  - 포인터 특징
    - NULL 가능
    - 재할당 가능
    - 주소 연산 가능
    - 간접 참조에 * 필요
  
  - 참조자 특징
    - NULL 불가능
    - 재할당 불가능
    - 선언 시 초기화 필수
    - 원본처럼 직접 사용

#### ex03: Unnecessary violence
• 요구사항
  - Weapon 클래스 구현
  - HumanA와 HumanB 클래스 구현
  - 무기를 사용하여 공격하는 기능 구현

• 목표
  - 클래스 간의 관계 설정
  - 참조자와 포인터의 적절한 사용
  - 멤버 변수의 초기화 방식 이해

• 클래스 구조
```cpp
class Weapon {
private:
    std::string type;
    
public:
    Weapon(std::string type);
    const std::string& getType() const;
    void setType(std::string type);
};

class HumanA {
private:
    std::string name;
    Weapon& weapon;    // 참조자 사용 (항상 무기 필요)
    
public:
    HumanA(std::string name, Weapon& weapon);
    void attack() const;
};

class HumanB {
private:
    std::string name;
    Weapon* weapon;    // 포인터 사용 (무기 선택적)
    
public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};
```

• 구현 예시
```cpp
// Weapon 클래스 구현
Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

// HumanA 클래스 구현
HumanA::HumanA(std::string name, Weapon& weapon) 
    : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " 
              << weapon.getType() << std::endl;
}

// HumanB 클래스 구현
HumanB::HumanB(std::string name) 
    : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon)
        std::cout << name << " attacks with their " 
                  << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
```

• 학습 포인트
  - 참조자 vs 포인터 선택 기준
    - HumanA: 참조자 (무기 필수)
    - HumanB: 포인터 (무기 선택적)
  
  - 멤버 초기화 리스트 활용
  - const 멤버 함수 사용
  - NULL 포인터 처리

#### ex04: Sed is for losers
• 요구사항
  - 파일 내용을 읽어서 새 파일에 복사
  - 특정 문자열을 다른 문자열로 교체
  - 원본 파일명.replace로 결과 저장

• 목표
  - 파일 입출력 스트림 활용
  - 문자열 처리 방법 학습
  - 에러 처리 구현

• 구현 예시
```cpp
int replace(std::string filename, std::string s1, std::string s2)
{
    // 입력 파일 열기
    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open()) {
        std::cerr << "Error: Could not open input file" << std::endl;
        return 1;
    }
    
    // 출력 파일 열기
    std::string outfile = filename + ".replace";
    std::ofstream ofs(outfile.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Error: Could not create output file" << std::endl;
        ifs.close();
        return 1;
    }
    
    // 한 줄씩 읽어서 처리
    std::string line;
    size_t pos;
    
    while (std::getline(ifs, line)) {
        pos = 0;
        // 한 줄 내에서 모든 s1을 s2로 교체
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        ofs << line;
        if (!ifs.eof())
            ofs << std::endl;
    }
    
    // 파일 닫기
    ifs.close();
    ofs.close();
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " filename s1 s2" << std::endl;
        return 1;
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    
    return replace(filename, s1, s2);
}
```

• 학습 포인트
  - 파일 스트림 클래스 사용
    - ifstream: 파일 읽기
    - ofstream: 파일 쓰기
  
  - 에러 처리
    - 파일 열기 실패
    - 잘못된 인자
    - 리소스 정리
  
  - 문자열 처리
    - find() 메서드
    - substr() 메서드
    - 문자열 연결

#### ex05: Harl 2.0
• 요구사항
  - Harl 클래스 구현
  - 4가지 레벨의 불평 메시지 출력
    - DEBUG
    - INFO
    - WARNING
    - ERROR
  - 멤버 함수 포인터 활용

• 목표
  - 멤버 함수 포인터 이해
  - 함수 포인터 배열 활용
  - 클래스 설계 능력 향상

• 클래스 구조
```cpp
class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    // 멤버 함수 포인터 타입 정의
    typedef void (Harl::*MemberFuncPtr)(void);
    
    // 레벨과 함수 매핑을 위한 구조체
    struct FuncMap {
        std::string level;
        MemberFuncPtr func;
    };
    
    static FuncMap funcMap[4];    // 함수 매핑 배열

public:
    void complain(std::string level);
};
```

• 구현 예시
```cpp
// 멤버 함수 구현
void Harl::debug(void) {
    std::cout << "[ DEBUG ]\n"
              << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
              << "I really do!\n" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\n"
              << "I cannot believe adding extra bacon costs more money.\n"
              << "You didn't put enough bacon in my burger!\n"
              << "If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free.\n"
              << "I've been coming for years whereas you started "
              << "working here since last month.\n" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable!\n"
              << "I want to speak to the manager now.\n" << std::endl;
}

// 함수 매핑 배열 초기화
Harl::FuncMap Harl::funcMap[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

// complain 함수 구현
void Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++) {
        if (funcMap[i].level == level) {
            (this->*funcMap[i].func)();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
```

• 학습 포인트
  - 멤버 함수 포인터 문법
  - 함수 포인터 배열 구성
  - 구조체를 통한 데이터 매핑
  - 클래스 내부 typedef 활용

#### ex06: Harl filter
• 요구사항
  - ex05의 Harl 클래스 확장
  - 필터 레벨에 따른 메시지 출력
  - switch문 사용 필수
  - 지정된 레벨 이상의 메시지만 출력

• 목표
  - switch문 활용법 학습
  - 열거형 상수 활용
  - 필터링 로직 구현

• 구현 예시
```cpp
class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    // 레벨 열거형 정의
    enum Level {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
        INVALID
    };
    
    // 문자열을 레벨로 변환
    Level getLevel(std::string level) {
        std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        
        for (int i = 0; i < 4; i++)
            if (levels[i] == level)
                return static_cast<Level>(i);
        return INVALID;
    }

public:
    void complain(std::string level);
    void filterComplain(std::string level);
};

// 필터링된 complain 구현
void Harl::filterComplain(std::string level) {
    Level filterLevel = getLevel(level);
    
    switch (filterLevel) {
        case DEBUG:
            debug();
            [[fallthrough]];  // 의도적인 fallthrough 표시
        case INFO:
            info();
            [[fallthrough]];
        case WARNING:
            warning();
            [[fallthrough]];
        case ERROR:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" 
                      << std::endl;
    }
}
```

• 실행 예시
```bash
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.

[ ERROR ]
This is unacceptable!
I want to speak to the manager now.
```

• 학습 포인트
  - switch문 특징
    - case 문의 순차적 실행
    - break의 역할
    - fallthrough 활용
  
  - 열거형 활용
    - 상수값 정의
    - 타입 안정성
    - 코드 가독성
  
  - 필터링 로직
    - 레벨 비교
    - 조건부 출력
    - 에러 처리

### Testing & Debug

• 컴파일 및 기본 테스트
```bash
# 컴파일
make                # 전체 컴파일
make ex00          # Zombie 프로그램
make ex01          # ZombieHorde 프로그램
make ex02          # Brain 프로그램
make ex03          # Weapon 프로그램
make ex04          # Sed 프로그램
make ex05          # Harl 프로그램
make ex06          # HarlFilter 프로그램

# 메모리 누수 테스트
valgrind --leak-check=full ./zombie
valgrind --leak-check=full ./horde
```

• Exercise별 테스트 케이스
```bash
# ex00: Zombie
./zombie
> 힙 좀비 생성/소멸 확인
> 스택 좀비 생성/소멸 확인
> 소멸자 호출 순서 확인

# ex01: ZombieHorde
./horde 5 "Test"
> N개 좀비 생성 확인
> 각 좀비 이름 설정 확인
> 전체 메모리 해제 확인

# ex02: Brain
./brain
> 주소값 출력 확인
> 포인터/참조자 동작 확인
> 값 변경 테스트

# ex03: Weapon
./weapon
> HumanA 무기 변경 테스트
> HumanB 무기 없는 상태 테스트
> 무기 타입 변경 테스트

# ex04: Sed
./sed infile "hello" "world"     # 기본 테스트
./sed nofile "hello" "world"     # 없는 파일
./sed infile "" "world"          # 빈 문자열
./sed infile "hello" ""          # 빈 교체문자

# ex05: Harl
./harl "DEBUG"
./harl "INFO"
./harl "WARNING"
./harl "ERROR"
./harl "INVALID"                 # 잘못된 레벨

# ex06: HarlFilter
./harlFilter "DEBUG"             # 모든 메시지
./harlFilter "INFO"              # INFO 이상
./harlFilter "WARNING"           # WARNING 이상
./harlFilter "ERROR"             # ERROR만
./harlFilter "INVALID"           # 잘못된 입력
```

• 자주 발생하는 문제와 해결
1. 메모리 관련
```cpp
// 메모리 누수
delete zombie;      // 단일 객체
delete[] horde;     // 배열 삭제

// 댕글링 포인터
Weapon* weapon = new Weapon("club");
delete weapon;
weapon = NULL;      // 삭제 후 NULL 처리
```

2. 파일 처리
```cpp
// 파일 스트림 정리
std::ifstream ifs(filename.c_str());
if (!ifs.is_open()) {
    return 1;
}
// ... 파일 처리 ...
ifs.close();        // 반드시 닫기
```

3. 문자열 처리
```cpp
// 빈 문자열 체크
if (str.empty()) {
    // 처리
}

// 문자열 찾기 실패
size_t pos = str.find(s1);
if (pos == std::string::npos) {
    // 찾기 실패
}
```

• 디버깅 팁
```cpp
// 디버그 출력
#ifdef DEBUG
    std::cout << "Debug: " << ptr << std::endl;
#endif

// GDB 사용
(gdb) break Zombie::announce
(gdb) print this->name
(gdb) backtrace

// 메모리 체크
valgrind --track-origins=yes ./program
```

### Additional Information

#### new와 delete 연산자
• 특징
```cpp
// 단일 객체
int* p = new int(42);        // 초기화와 함께 할당
delete p;                    // 단일 객체 해제

// 객체 배열
int* arr = new int[10];      // 배열 할당
delete[] arr;                // 배열 해제

// 할당 실패 처리
try {
    int* big = new int[999999999];
} catch (std::bad_alloc& e) {
    std::cerr << "할당 실패: " << e.what() << std::endl;
}
```

#### 포인터 vs 참조자
• 주요 차이점
```cpp
// 1. NULL 가능성
int* ptr = NULL;             // 가능
// int& ref;                 // 불가능: 반드시 초기화 필요

// 2. 재할당
int a = 1, b = 2;
int* ptr = &a;
ptr = &b;                    // 가능
int& ref = a;
// ref = &b;                 // 불가능: 값 대입만 가능

// 3. 주소 연산
ptr++;                       // 가능
// ref++;                    // 불가능: 원본 값 증가
```

#### 파일 스트림
• 주요 클래스와 사용법
```cpp
// 파일 읽기
std::ifstream ifs("input.txt");
std::string line;
while (std::getline(ifs, line)) {
    // 처리
}

// 파일 쓰기
std::ofstream ofs("output.txt");
ofs << "Hello, World!" << std::endl;

// 에러 처리
if (!ifs.is_open()) {
    // 파일 열기 실패
}

if (ifs.fail()) {
    // 읽기 작업 실패
}
```

#### 멤버 함수 포인터
• 문법과 활용
```cpp
// 선언
class MyClass {
    typedef void (MyClass::*MemFuncPtr)();
    MemFuncPtr ptr;
};

// 사용
(object.*ptr)();             // 객체로 호출
(ptr->*ptr)();              // 포인터로 호출

// 배열에서 활용
struct FuncMap {
    std::string name;
    MemFuncPtr func;
} funcMap[] = {
    {"func1", &MyClass::func1},
    {"func2", &MyClass::func2}
};
```

#### switch문 특징
• 사용법과 주의사항
```cpp
// 기본 구조
switch (value) {
    case 1:                  // 상수만 가능
        // 처리
        break;              // break 필수
    
    case 2:                 // fallthrough 활용
    case 3:
        // 공통 처리
        break;
    
    default:                // 기본 처리
        break;
}

// C++17 이상에서 fallthrough 명시
case 1:
    // 처리
    [[fallthrough]];       // 의도적 fallthrough 표시
case 2:
    // 처리
```

### Reference
> 메모리 관리와 참조자에 대한 깊은 이해를 위한 자료들

• Memory Management
  - [Dynamic memory management](http://www.cplusplus.com/doc/tutorial/dynamic/)
  - [Memory Management in C++](https://www.geeksforgeeks.org/memory-management-in-cpp/)

• References and Pointers
  - [References in C++](https://www.learncpp.com/cpp-tutorial/references/)
  - [Pointers vs References](https://www.geeksforgeeks.org/pointers-vs-references-cpp/)

• File Handling
  - [C++ File Handling](http://www.cplusplus.com/doc/tutorial/files/)
  - [Working with Files in C++](https://www.learncpp.com/cpp-tutorial/basic-file-io/)

• Member Function Pointers
  - [Member Function Pointers](https://isocpp.org/wiki/faq/pointers-to-members)
  - [Function Pointers in C++](https://www.cprogramming.com/tutorial/function-pointers.html)

• Switch Statements
  - [Switch Statement in C++](https://en.cppreference.com/w/cpp/language/switch)
  - [Switch Case Practices](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-switch)