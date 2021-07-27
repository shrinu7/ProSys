#include <bits/stdc++.h>
#include <termios.h>
#include <unistd.h>


using namespace std;

// ------------------------------------------------------ CLASS DECLARATION FOR MARKS -------------------------------------------------------

class marks
{
    string course_name;
    string course_id;
    int cat1;
    int cat2;
    int fat;
public:
    void set_course_name(string);
    void set_course_id(string);
    void set_cat1(int);
    void set_cat2(int);
    void set_fat(int);

    string get_course_name();
    string get_course_id();
    int get_cat1();
    int get_cat2();
    int get_fat();
};

// ------------------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------------------------

// ------------------------------------------------------ MARKS CLASS DECLARATIONS FUNCTIONS ----------------------------

void marks :: set_course_name(string s)
{
    course_name = s;
}

void marks :: set_course_id(string s)
{
    course_id = s;
}

void marks :: set_cat1(int n)
{
    cat1 = n;
}

void marks :: set_cat2(int n)
{
    cat2 = n;
}

void marks :: set_fat(int n)
{
    fat = n;
}


string marks :: get_course_name()
{
    return course_name;
}

string marks :: get_course_id()
{
    return course_id;
}

int marks :: get_cat1()
{
    return cat1;
}

int marks :: get_cat2()
{
    return cat2;
}

int marks :: get_fat()
{
    return fat;
}

// ------------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------

// ------------------------------------------------------------ STUDENT CLASS DECLARATION ----------------------------------------

class student
{
private:
    string name;
    string reg_num;
    string proctor_id;
    marks student_marks[3];
    int num_of_courses;
    string phone_num;
    string password;
    string mother_name;
    string father_name;
    string message_from_proctor;
    string message_to_proctor;
    string password_parent;
    string mssg_proc_prnt;
    string mssg_prnt_proc;


public:
    student *next;
 

    student();
    student(string);
    
    void set_name(string name);
    void set_reg_num(string reg_num);
    void set_proctor_id(string p);
    void set_phone_num(string);
    void set_password(string);
    void set_mother_name(string);
    void set_father_name(string);
    void set_message_from_proctor(string);
    void set_message_to_proctor(string);
    void set_num_of_courses(int);
    void set_student_marks(string, string, int, int, int);
    void set_mssg_proc_prnt(string);
    void set_mssg_prnt_proc(string);
    void set_password_parent(string);

    string get_name();
    string get_reg_num();
    string get_proctor_id();
    string get_phone_num();
    string get_password();
    string get_mother_name();
    string get_father_name();
    string get_message_from_proctor();
    string get_message_to_proctor();
    int get_num_of_courses();
    marks *get_student_marks();
    string get_mssg_proc_prnt();
    string get_mssg_prnt_proc();
    string get_password_parent();
    
};

// ---------------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------------

// ------------------------------------------------- Student Class Functions ---------------------------------------------------------

student :: student()
{
    num_of_courses = 0;
}

student :: student(string proctor_id)
{
    this -> proctor_id = proctor_id;
    num_of_courses = 0;
}

void student :: set_name(string name)
{
    this -> name = name;
}

void student :: set_reg_num(string reg_num)
{
    this -> reg_num = reg_num;
}


void student :: set_proctor_id(string p)
{
    proctor_id = p;
}

void student :: set_phone_num(string x)
{
    this -> phone_num = x;
}

void student :: set_password(string s)
{
    this -> password = s;
}

void student :: set_father_name(string s)
{
    this -> father_name = s;
}

void student :: set_mother_name(string s)
{
    this -> mother_name = s;
}

void student :: set_message_from_proctor(string s)
{
    this -> message_from_proctor = s;
}

void student :: set_message_to_proctor(string s)
{
    this -> message_to_proctor = s;
}

void student :: set_num_of_courses(int n)
{
    this -> num_of_courses = 0;
}

void student :: set_student_marks(string course_name, string course_id, int cat1, int cat2, int fat)
{
    student_marks[num_of_courses].set_course_name(course_name);
    student_marks[num_of_courses].set_course_id(course_id);
    student_marks[num_of_courses].set_cat1(cat1);
    student_marks[num_of_courses].set_cat2(cat2);
    student_marks[num_of_courses].set_fat(fat);
    num_of_courses++;
}

void student :: set_mssg_proc_prnt(string s)
{
    mssg_proc_prnt = s;
}

void student :: set_mssg_prnt_proc(string s)
{
    mssg_prnt_proc = s;
}

void student :: set_password_parent(string s)
{
    password_parent = s;
}



string student :: get_name()
{
    return name;
}

string student :: get_reg_num()
{
    return reg_num;
}

string student :: get_proctor_id()
{
    return proctor_id;
}

string student :: get_phone_num()
{
    return phone_num;
}

string student :: get_password()
{
    return password;
}

string student :: get_father_name()
{
    return father_name;
}

string student :: get_mother_name()
{
    return mother_name;
}

string student :: get_message_from_proctor()
{
    return message_from_proctor;
}

string student :: get_message_to_proctor()
{
    return message_to_proctor;
}

int student :: get_num_of_courses()
{
    return num_of_courses;
}

marks* student :: get_student_marks()
{
    return &student_marks[0];
}

string student :: get_mssg_proc_prnt()
{
    return mssg_proc_prnt;
}

string student :: get_mssg_prnt_proc()
{
    return mssg_prnt_proc;
}

string student :: get_password_parent()
{
    return password_parent;
}

//------------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------------------------------

// --------------------------------------------------------------------- PROCTOR CLASS DECLARATION -------------------------------------------------------------------

class proctor
{
private:
    string name;
    student *front, *rear;
    int count;
    string proctor_id;
    string phone_num;
    string password;
    string message_from_admin;
public:
    proctor();
    proctor(string, string, string, string, string);

    void set_students(string, string, string, string, string, string, string, string, string);
    void set_message_from_admin(string);

    string get_name();
    void get_student_name();
    string get_password();
    string get_proctor_id();
    int get_count_students();
    student *get_front_student();
    string get_message_from_admin();
    string get_phone_num();

};

int proctor_num = 3;

// --------------------------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------------------------------


// ---------------------------------------------------------------------------- PROCTOR'S DATA --------------------------------------------------------------------

proctor proctor_data[3] = {proctor("Mr.Srinivasan Krishnan", "18BHDE999", "Krishnan999", "", "4325395748"), proctor("Mr.Rajasekar Ram", "16VJDE394", "Ram394", "", "7534623135"), proctor("Mr.Gundala Swami", "16JDJU383", "Swami383", "", "8643256323")};


//------------------------------------------------------------------------- Proctor Class Functions ---------------------------------------------------------------

proctor :: proctor()
{
    count = 0;
    front = NULL; 
    rear = NULL;
}

proctor :: proctor(string name, string proctor_id, string password, string message, string num)
{
    count = 0;
    this -> name = name;
    this -> proctor_id = proctor_id;
    this -> password = password;
    this -> message_from_admin = message;
    this -> phone_num = num;
    front = NULL;
    rear = NULL;
}

void proctor :: set_students(string name1, string reg_num1, string phone, string p_word, string father, string mother, string pass, string message = "", string mssg_p = "")
{
    student *temp = new student;
    temp -> set_name(name1);
    temp -> set_reg_num(reg_num1);
    temp -> set_proctor_id(this -> proctor_id);
    temp -> set_phone_num(phone);
    temp -> set_password(p_word);
    temp -> set_father_name(father);
    temp -> set_mother_name(mother);
    temp -> set_message_from_proctor(message);
    temp -> set_message_to_proctor(mssg_p);
    temp -> set_password_parent(pass);
    temp -> set_mssg_prnt_proc("");
    temp -> set_mssg_proc_prnt("");
    temp -> next = NULL;

    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear -> next = temp;
        rear = temp;
    }
    count++;
}

void proctor :: set_message_from_admin(string s)
{
    this -> message_from_admin = s;
}


string proctor :: get_name()
{
    return name;
}

void proctor :: get_student_name()
{
    student *temp = front;
    while(temp != NULL)
    {
        cout << temp -> get_name() << endl;
        temp = temp -> next;
    }
}

string proctor :: get_password()
{
    return password;
}

string proctor :: get_proctor_id()
{
    return proctor_id;
}

int proctor :: get_count_students()
{
    return count;
}

student* proctor :: get_front_student()
{
    return front;
}

string proctor :: get_message_from_admin()
{
    return message_from_admin;
}

string proctor :: get_phone_num()
{
    return phone_num;
}

//--------------------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------------------------------------


// ----------------------------------------------------- LINKED LIST CLASS FOR STUDENT DATA STORAGE - HASHING ------------------------------------------------

class Link_lst
{
    student *front;
    student *rear;
    int count;
public:
    Link_lst()
    {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    
    // I am making a new storage for the pointer and then sending the data here
    void add(student *ptr_temp) 
    {
        count++;
        if(front == NULL)
        {
            front = ptr_temp;
            rear = ptr_temp;
            
        }
        else 
        {
            rear -> next = ptr_temp;
            rear = ptr_temp;            
        }        
    }

    student *get_student_front_ptr()
    {
        return front;
    }

    int get_count()
    {
        return count;
    }
};

Link_lst hashing_students[10];
int hash_func(string);
void hashing_the_student_info();
student *hash_search(student *);
student *hash_search(string);

Link_lst hashing_by_parent_name[10];

// --------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------------------------------

//----------------------------------------------------------- DECLARATIONS OF SOME FUNCTIONS -------------------------------------------------------------------------

// ---------- home page function
void go_to_home();
// ------xxxxxxxx------

// admin login-----

void admin_login();
void admin_after_login();
void modify_student_information();
void modify_proctor_information();
void student_profile_view();
void proctor_profile_view();
void message_to_proctor();
void show_details_proctor(proctor *);
void proctor_message_error();

//There will be only one administrator

// ------------------ ADMIN'S USERNAME AND PASSWORD ----------------------------

string admin_username = "system_administrator";
string admin_password = "kaustubh_shankar";

// -------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------

// xxxxxx--------xxxxxxxxx

// ------------------------- PROCTOR LOGIN ------------------------

void proctor_login();

//proctor_after_login


void proctor_after_login(proctor &);
void modify_student_info(proctor &);
void student_error(proctor &, string);
void modify_student(student *, proctor &);
void after_modifying(student *, proctor &);
void admin_message_check(proctor &);
void student_message_check(proctor &);
void student_details_view(proctor &);
void message_part_student(student *, proctor &, string);
void message_student(proctor &);
void show_details_students(student *);
void students_marks_view(proctor &);
void marks_view_inside(student *, proctor &);
void inside_student_marks_error(student *, proctor &);
void message_parent(proctor &);
void message_part_parent(student *, proctor &, string);
void parent_message_check(proctor &);
//xxxxxxxxxxxxxxxxxxxxxxxxx -------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//student login --------------

void student_login();
// student after login
void student_after_login(student *);
void message_check_from_proctor(student *);
void message_to_proctor_func(student *);
void student_check_marks(student *);

// xxxxxxxxxxx-----------------------------xxxxxxxxxxxx

//parent login ----------------------

void parent_login();
void parent_after_login(student *);
void message_check_from_proctor_parent(student *);
void message_to_proctor_func_parent(student *);
void student_check_marks_parent(student *);
// xxxxxxxxxx----------------xxxxxxxxxxx

// password error correction ---------------------------------

void pass_error(string);
void if_error_t(string);

//-------------------- xxxxxxxxxxxxxxxxxxxxxx -----------------------------

// ----------------------- GETCHE AND GETCH FUNCTION for PASSWORD MASKING------------------------------------

static struct termios old, current;

/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  current = old; /* make new settings same as old settings */
  current.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      current.c_lflag |= ECHO; /* set echo mode */
  } else {
      current.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}

// -------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------------

//------------------------------------ LOGIN PASSWORD ERROR CORRECTION -------------------------------
void if_error_t(string str_arg)
{
    cout << "Choose from the following options: " << endl;
    cout << "1. Try again. " << endl;
    cout << "2. Go to the homepage. " << endl;
    cout << "3. Exit from the program. " << endl;

    cout << endl;

        string temp_choice;
        cin >> temp_choice;

        if(temp_choice == "1")
        {
            if(str_arg == "proctor")
            {
                proctor_login();
            }

            else if(str_arg == "student")
            {
                student_login();
            }

            else if(str_arg == "admin")
            {
                admin_login();
            }
            
            else if(str_arg == "parent")
            {
                parent_login();
            }
            
        }
        else if(temp_choice == "2")
        {
            go_to_home();
        }
        else if(temp_choice == "3")
        {
            exit(0);
        }
        else
        {
            cout << endl;
            cout << "Please choose an appropriate option. " << endl << endl;

            if_error_t(str_arg);

        }
}

void pass_error(string str_arg)
{
        cout << "Incorrect Username or Password!!! " << endl << endl;
        cout << "Choose from the following options: " << endl;
        cout << "1. Try again. " << endl;
        cout << "2. Go to the homepage. " << endl;
        cout << "3. Exit from the program. " << endl;

        cout << endl;
            
        string temp_choice;
        cin >> temp_choice;

        if(temp_choice == "1")
        {
            if(str_arg == "proctor")
            {
                proctor_login();
            }

            else if(str_arg == "admin")
            {
                admin_login();
            }

            else if(str_arg == "student")
            {
                student_login();
            }

            else if(str_arg == "parent")
            {
                parent_login();
            }
            
        }
        else if(temp_choice == "2")
        {
            go_to_home();
        }
        else if(temp_choice == "3")
        {
            exit(0);
        }
        else
        {
            cout << endl;
            cout << "Please choose an appropriate option. " << endl << endl;

            if_error_t(str_arg);

        }
}

// --------------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx --------------------------------------------

// --------------------------------------------------- home page function -------------------------------------------

void go_to_home()
{
    system("clear");

    cout << "------------------------------ WELCOME TO THE PROCTOR MANAGEMENT SYSYTEM ------------------------------------" << endl << endl;
    cout << "--------------------------------------------- HOMEPAGE ------------------------------------------------------" << endl << endl;

    cout << "Choose how do you want to login in the system: " << endl << endl;

    cout << "1. Administrator Login. " << endl;
    cout << "2. Proctor Login." << endl;
    cout << "3. Student Login." << endl;
    cout << "4. Parent Login." << endl;
    cout << "5. Exit from the program. " << endl;

    cout << endl;

    string temp_login;
    cin >> temp_login;

    cout << endl;

    if(temp_login == "1")
    {
        admin_login();
    }

    else if(temp_login == "2")
    {
        proctor_login();
    }

    else if(temp_login == "3")
    {
        student_login();
    }

    else if(temp_login == "4")
    {
        parent_login();
    }

    else if(temp_login == "5")
    {
        system("clear");

        cout << "Do you want to exit from the program? (y/n) " << endl;
        string temp;
        cin >> temp;
        if(temp == "y") exit(0);
        else go_to_home();
    }

    else
    {
        go_to_home();        
    }   
}

//------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------------

// ---------------------------------------- admin_login function ------------------------------------------------

void admin_login()
{
    system("clear");
    cout << "------------------------------------------- ADMIN LOGIN ------------------------------------------------------" << endl << endl;

    cout << "                              Username : ";
    string temp_username;
    cin >> temp_username;
    cout << endl;

    cout << "                              Password : ";
    string temp_password;
    cin >> temp_password;
    cout << endl;

    int flag = 1;

    if(temp_username == admin_username && temp_password == admin_password)
    {
        flag = 1;
        admin_after_login();
    }
    else 
    {
        flag = 0;
    }

    if(flag == 0)
    {
        pass_error("admin");
    }

}
// ---------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx----------------------------

// ----------------------------------------- ADMIN AFTER LOGIN -------------------------------------

void admin_after_login()
{
    system("clear");
    cout << "                          Welcome back Administrator" << endl << endl;
    cout << "What would you like to do today? " << endl << endl;

    cout << "1. Modify student information. " << endl;
    cout << "2. Modify proctor's information. " << endl;
    cout << "3. View the details of students. " << endl;
    cout << "4. View the details of proctors. " << endl;
    cout << "5. Message the proctor. " << endl;
    cout << "6. Go to the homepage. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        modify_student_information();
    }

    else if(temp_arg == "2")
    {
        //modify_proctor_information();
    }

    else if(temp_arg == "3")
    {
        student_profile_view();
    }

    else if(temp_arg == "4")
    {
        proctor_profile_view();
    }

    else if(temp_arg == "5")
    {
        message_to_proctor();
    }

    else if(temp_arg == "6")
    {
        go_to_home();
    }

    else 
    {   
        admin_after_login();
    }   
}
// -------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------

// -------------------------------------------- ADMIN MODIFY STUDENT DATA ----------------------------------

void modify_student_information()
{
    system("clear");
    cout << "Enter the registration number of the student: " << endl << endl;

    string reg_num = "";
    
    cin.ignore();
    getline(cin, reg_num);

    proctor *pr = &proctor_data[0];
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// -------------------------------------------- ADMIN MESSAGE TO PROCTOR --------------------------------------------

void message_to_proctor()
{
    system("clear");
    cout << "Who do you want to send a message to? Please enter the Proctor ID. " << endl << endl;

    string temp_arg, mssg_arg;
    int flag = 0;
    cin >> temp_arg;

    system("clear");
    cout << "Enter the message below : " << endl << endl;
    cin.ignore();
    getline(cin, mssg_arg);

    proctor *pr = &proctor_data[0];
    for(int i = 0; i < 3; i++)
    {
        if(pr -> get_proctor_id() == temp_arg)
        {
            flag = 1;
            break;
        }
        else
        {
            pr++;
            flag = 0;
        }       
    }

    if(flag == 0)
    {
        proctor_message_error();
    }
    else
    {
        pr -> set_message_from_admin(mssg_arg);
    }

    cout << "The message has been successfully sent to " << pr -> get_name() << "." << endl << endl;

    cout << "Press enter to go the main menu....." << endl;
    cin.ignore();
    getch();

    admin_after_login();
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------

// --------------------------------------------- ADMIN - MESSAGE ERROR FUNCTION ---------------------------------

void proctor_message_error()
{
    system("clear");
    cout << "Proctor ID not found. " << endl << endl;
    cout << "1. Try again. " << endl;
    cout << "2. Go back. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        message_to_proctor();
    }

    else if(temp_arg == "2")
    {
        admin_after_login();
    }

    else 
    {
        proctor_message_error();
    }
}

// ---------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx --------------------------------

// -------------------------------------------- ADMIN STUDENT PROFILE VIEW ----------------------------------

void student_profile_view()
{
    system("clear");
    cout << "The details of the students are as follows: " << endl << endl;
    proctor *pr = &proctor_data[0];
    for(int i = 0; i < 3; i++)
    {
        student *ptr = pr -> get_front_student();

        while(ptr != NULL)
        {
            show_details_students(ptr);
            ptr = ptr -> next;
        }
        pr++;
    }

    cout << "Press any key to go back to the main menu......." << endl << endl;
    cin.ignore();
    getch();

    admin_after_login();
}

// -------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------

// -------------------------------------------- ADMIN PROCTOR PROFILE VIEW ---------------------------------------

void proctor_profile_view()
{
    system("clear");
    cout << "The details of the proctor are as follows: " << endl << endl << endl;
    proctor *pr = &proctor_data[0];
    for(int i = 0; i < 3; i++)
    {
        show_details_proctor(pr);
        cout << endl << endl << endl;
        pr++;
    }

    cout << "Press any key to go back to the main menu........" << endl << endl;
    cin.ignore();
    getch();

    admin_after_login();
}

// -------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------------

// ------------------------------------------ SHOW FUNC DETAILS OF PROCTOR ----------------------------------------

void show_details_proctor(proctor *pr)
{
    cout << "Name                                 : " << pr -> get_name() << endl;
    cout << "Proctor ID                           : " << pr -> get_proctor_id() << endl;
    cout << "Phone Number                         : " << pr -> get_phone_num() << endl;
    cout << "Number of students under the proctor : " << pr -> get_count_students() << endl;
    cout << "The proctees under the proctor are  : " << endl << endl;
    student *ptr = pr -> get_front_student();
    while(ptr != NULL)
    {
        cout << ptr -> get_name() << endl;
        ptr = ptr -> next;
    }
}

// ------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// ------------------------------------ proctor_login function -----------------------------------------------

void proctor_login()
{
    system("clear");
    cout << "------------------------------------------- PROCTOR LOGIN ------------------------------------------------------" << endl << endl;

    cout << "                              Username : ";
    string temp_username;
    cin >> temp_username;
    cout << endl;

    cout << "                              Password : ";
    string temp_password;
    cin >> temp_password;
    cout << endl;

    int flag = 1;

    for(int i = 0; i < proctor_num; i++)
    {
        if(proctor_data[i].get_proctor_id() == temp_username && proctor_data[i].get_password() == temp_password)
        {
            flag = 1;
            proctor_after_login(proctor_data[i]);
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 0)
    {
        pass_error("proctor");
    }
    

}

// -------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------------

//------------------------------------------------- PROCTOR AFTER LOGIN --------------------------------------------------

void proctor_after_login(proctor &pr)
{
    system("clear");
    cout << "                                         Welcome back " << pr.get_name() << endl << endl;
    cout << "What would you like to do today? " << endl << endl;

    cout << "1.  Modify student information." << endl;
    cout << "2.  View message from the administrator. " << endl;
    cout << "3.  View any message from students. " << endl;
    cout << "4.  View any message from the student's parents" << endl;
    cout << "5.  View the details of student. " << endl;
    cout << "6.  View the marks of student. " << endl;
    cout << "7.  Message a student. " << endl; 
    cout << "8.  Message a parent." << endl;
    cout << "9.  Log out from the account. " << endl;
    cout << "10. Go to the homepage. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        modify_student_info(pr);
    }

    else if(temp_arg == "2")
    {
        admin_message_check(pr);
    }

    else if(temp_arg == "3")
    {
        student_message_check(pr);
    }

    else if(temp_arg == "4")
    {
        parent_message_check(pr);
    }

    else if(temp_arg == "5")
    {
        student_details_view(pr);
    } 

    else if(temp_arg == "6")
    {
        students_marks_view(pr);
    }  

    else if(temp_arg == "7")
    {
        message_student(pr);
    }

    else if(temp_arg == "8")
    {
        message_parent(pr);
    }

    else if(temp_arg == "9")
    {
        proctor_login();
    }

    else if(temp_arg == "10")
    {
        go_to_home();
    }

    else 
    {
        proctor_after_login(pr);
    }


}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------------------

// --------------------------------------------- PROCTOR - MESSAGE CHECK FROM PARENT --------------------------------------

void parent_message_check(proctor &pr)
{
        system("clear");
        student *ptr = pr.get_front_student();
        cout << "The message from the students are: " << endl << endl;
        while(ptr != NULL)
        {
            student *pt_s = hashing_by_parent_name[hash_func(ptr -> get_father_name())].get_student_front_ptr();
            while(pt_s != NULL)
            {
                if(pt_s -> get_reg_num() == ptr -> get_reg_num())
                {
                    break;
                }
                pt_s = pt_s -> next;
            }


            if(pt_s -> get_mssg_prnt_proc() != "")
            {
                cout << pt_s -> get_mssg_prnt_proc() << " from " << pt_s -> get_name() << "'s parent " << pt_s -> get_father_name() << " " << pt_s -> get_reg_num() << endl << endl;
            }

            else
            {
                cout << "There is no message from " << pt_s -> get_name() << "'s parent " << pt_s -> get_father_name() << " " << pt_s -> get_reg_num() << endl << endl;
            }
            ptr = ptr -> next;
        }

        cout << endl;
        cout << "Press any key to go to main menu ....." << endl << endl;
        cin.ignore();
        getch();

        proctor_after_login(pr);
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------------
// --------------------------------------------- PROCTOR - MESSAGE A PARENT ---------------------------------------------------

void message_parent(proctor &pr)
{
    system("clear");
    cout << "Whose parent do you want to send the message to? Please enter the registration number. " << endl << endl;

    string temp_arg, mssg_arg;
    cin >> temp_arg;

    system("clear");
    cout << "Enter the message below: " << endl << endl;
    cin.ignore();
    getline(cin, mssg_arg);

    student *ptr = hashing_students[hash_func(temp_arg)].get_student_front_ptr();
    while(ptr != NULL)
    {
        if(ptr -> get_reg_num() == temp_arg)
        {
            break;
        }
        ptr = ptr -> next;
    }

    if(ptr == NULL)
    {
        student_error(pr, "message_parent");
    }

    else
    {
        message_part_parent(ptr, pr, mssg_arg);
    }
    
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx --------------------------------------

// --------------------------------------------- PROCTOR - MESSAGE PARTICULAR PARENT ----------------------------------

void message_part_parent(student *ptr, proctor &pr, string s)
{
    ptr -> set_mssg_proc_prnt(s);
    cout << "The message has been successfully sent to " << ptr -> get_name() << "' s parent." << endl << endl;

    cout << "Press enter to go to the main menu......." << endl;
    cin.ignore();
    getch();

    proctor_after_login(pr);
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------
// --------------------------------------------- PROCTOR STUDENTS MARKS'S VIEW -----------------------------------------------------

void students_marks_view(proctor &pr)
{
    system("clear");
    student *ptr = pr.get_front_student();
    cout << "Please enter the registration number of the student from the following list : " << endl << endl;
    while(ptr != NULL)
    {
        cout << "Name                : " << ptr -> get_name() << endl;
        cout << "Registration Number : " << ptr -> get_reg_num() << endl;
        cout << endl;
        ptr = ptr -> next;
    }

    string temp_arg;
    cin.ignore();
    getline(cin, temp_arg);

    ptr = hash_search(temp_arg);


    if(ptr == NULL)
    {
        cout << "Registration number not found. Please try again." << endl << endl;
        cout << "Press enter to continue....." << endl;
        cin.ignore();
        getch();

        students_marks_view(pr);
    }

    else 
    {
        marks_view_inside(ptr, pr);
    }
}

// ---------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ------------------------------------------------

// --------------------------------------------- INSIDE MARKS VIEW --------------------------------------

void marks_view_inside(student *ptr, proctor &pr)
{
    system("clear");
    marks *m = ptr -> get_student_marks();
    for(int i = 0; i < ptr -> get_num_of_courses(); i++)
    {
        cout << "Course Name : " << m -> get_course_name() << endl;
        cout << "Course ID   : " << m -> get_course_id() << endl;
        cout << "CAT 1 Score : " << m -> get_cat1() << endl;
        cout << "CAT 2 Score : " << m -> get_cat2() << endl;
        cout << "FAT Score   : " << m -> get_fat() << endl;
        cout << endl;
        m++;
    }

    cout << "Please select from the following options : " << endl << endl;
    cout << "1. Do you want to message " << ptr -> get_name() << "?" << endl;
    cout << "2. Do you want to go back to the main menu? " << endl << endl;

    

    while(true)
    {
        string temp;
        cin >> temp;

        if(temp == "1")
        {
            cout << "Please enter the message that you want to send : " << endl << endl;
            string mssg;
            cin.ignore();
            getline(cin, mssg);

            message_part_student(ptr, pr, mssg);

            break;
        }

        else if(temp == "2")
        {
            proctor_after_login(pr);
            break;
        }

        else
        {
            cout << "Input not recognized. Please try again." << endl << endl;
            continue;
        }
    }
    
}

// ---------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// --------------------------------------------- INSIDE STUDENT MARKS ERROR ----------------------

void inside_student_marks_error(student *ptr, proctor &pr)
{
    string temp;
    getline(cin, temp);

    if(temp == "1")
    {
        cout << "Please enter the message that you want to send : " << endl << endl;
        string mssg;
        cin.ignore();
        getline(cin, mssg);

        message_part_student(ptr, pr, mssg);
    }

    else if(temp == "2")
    {
        proctor_after_login(pr);
    }

    else
    {
        inside_student_marks_error(ptr, pr);
    }
    
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------

// --------------------------------------------- MESSAGE A STUDENT -----------------------------------

void message_student(proctor &pr)
{
    system("clear");
    cout << "Who do you want to send a message to? Please enter the registration number. " << endl << endl;

    string temp_arg, mssg_arg;
    cin >> temp_arg;
    
    system("clear");
    cout << "Enter the message below: " << endl << endl;
    cin.ignore();
    getline(cin, mssg_arg);

    student *ptr = pr.get_front_student();
    while (ptr != NULL)
    {
        if(ptr -> get_reg_num() == temp_arg)
        {
            break;
        }
        ptr = ptr -> next;
    }

    if(ptr == NULL)
    {
        student_error(pr, "message_s");
    }
    else 
    {
        message_part_student(ptr, pr, mssg_arg);
    }
    
    
}

// ----------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// ----------------------------------------------- MESSAGE PARTICULAR STUDENT --------------------------------------

void message_part_student(student *ptr, proctor &pr, string s)
{
    ptr -> set_message_from_proctor(s);
    student *p = hashing_students[hash_func(ptr -> get_reg_num())].get_student_front_ptr();
    while (p != NULL)
    {
        if(p -> get_reg_num() == ptr -> get_reg_num())
        {
            break;
        }
        p = p -> next;
    }

    p -> set_message_from_proctor(s);

    cout << "The message has been successfully sent to " << p -> get_name() << "." << endl << endl;

    cout << "Press enter to go to the main menu....." << endl;
    cin.ignore();
    getch();

    proctor_after_login(pr);
    
}

// ----------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------------

// --------------------------------------------- STUDENT DETAILED VIEW ---------------------------------------

void student_details_view(proctor &pr)
{
    system("clear");
    cout << "The details of your proctees are as follows: " << endl << endl;
    student *ptr = pr.get_front_student();
    
    while(ptr != NULL)
    {
        show_details_students(ptr);
        ptr = ptr -> next;
    }
    
    cout << "Press any key to go back to the main menu......." << endl << endl;
    cin.ignore();
    getch(); 

    proctor_after_login(pr);
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------------------------

// --------------------------------------------- SHOW STUDENT DETAILS ----------------------------------------

void show_details_students(student *ptr)
{
    cout << "Name               : " << ptr -> get_name() << endl;
    cout << "Registration No.   : " << ptr -> get_reg_num() << endl;
    cout << "Phone No.          : " << ptr -> get_phone_num() << endl;
    cout << "Father's Name      : " << ptr -> get_father_name() << endl;
    cout << "Mother's Name      : " << ptr -> get_mother_name() << endl;
    cout << endl;
}

// ---------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// --------------------------------------------- PROCTOR MESSAGE FROM STUDENT ------------------------------------------

void student_message_check(proctor &pr)
{
    system("clear");
    student *ptr = pr.get_front_student();
    cout << "The messages from the students are : " << endl << endl;
    while(ptr != NULL)
    {
        student *pt_s = hash_search(ptr);
        if(pt_s -> get_message_to_proctor() != "")
        {
            cout << pt_s -> get_message_to_proctor() << " from " << pt_s -> get_name() << " " << pt_s -> get_reg_num() << "." << endl << endl;
        }

        else
        {
            cout << "There is no message from " << pt_s -> get_name() << " " << pt_s -> get_reg_num() << "." << endl << endl;
        }
        ptr = ptr -> next;        
    }

    cout << endl;
    cout << "Press any key to go to main menu...." << endl << endl;
    cin.ignore();
    getch();

    proctor_after_login(pr);

}

//--------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------

// --------------------------------------------- PROCTOR - ADMIN MESSAGE CHECK -------------------------------------------------

void admin_message_check(proctor &pr)
{
    system("clear");
    if(pr.get_message_from_admin() == "")
    {
        cout << "There is no message from the admininstrator. " << endl;
    }
    else 
    {
        cout << pr.get_message_from_admin() << endl << endl;
    }

    cout << endl;
    cout << "Press any key to head back to the main menu...... " << endl << endl;
    cin.ignore();
    getch();

    proctor_after_login(pr);
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------

// --------------------------------------------- MODIFY STUDENT INFO BY PROCTOR --------------------------------

void modify_student_info(proctor &pr)
{
    system("clear");
    cout << "Enter the registration number of the student: " << endl << endl;
    
    string reg_num = "";

    cin.ignore();
    getline(cin, reg_num);

    student *ptr = pr.get_front_student();
    while(ptr != NULL)
    {
        if(ptr -> get_reg_num() == reg_num)
        {
            break;
        }
        ptr = ptr -> next;
    }

    if(ptr == NULL)
    {
        student_error(pr, "modify");
    }
    else 
    {
        modify_student(ptr, pr);
    }
    
}

// --------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------------


// ----------------------------------------- PROCTOR -  STUDENT ERROR ----------------------------------------

void student_error(proctor &pr, string s)
{
    system("clear");
    cout << "Registration number not found. " << endl << endl;
    cout << "1. Try again. " << endl;
    cout << "2. Go back. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        if(s == "modify")
        {
            modify_student_info(pr);
        }

        else if(s == "message_s")
        {
            message_student(pr);
        }

        else if(s == "message_parent")
        {
            message_parent(pr);
        }
    }
    else if(temp_arg == "2")
    {
        proctor_after_login(pr);
    }
    else 
    {
        student_error(pr, s);
    }
}

// ---------------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------

// ---------------------------------------------- PROCTOR - MODIFY STUDENT ---------------------------------------------

void modify_student(student *ptr, proctor &pr)
{
    system("clear");
    cout << "What do you want to modify? " << endl << endl;
    cout << "1. Name. " << endl;
    cout << "2. Phone number. " << endl;
    cout << "3. Mother's name. " << endl;
    cout << "4. Father's name. " << endl;
    cout << "5. Go back to main menu. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        system("clear");
        cout << "Enter the new name that you want to change to: " << endl;
        string temp_name;
        cin.ignore();
        getline(cin, temp_name);

        ptr -> set_name(temp_name);
        
        student *search_ptr = hash_search(ptr);
        search_ptr -> set_name(temp_name);

        cout << endl;
        cout << "The name has been successfully changed to " << ptr -> get_name() << "." << endl;
        cout << endl << endl;

        after_modifying(ptr, pr);
    
    }

    else if(temp_arg == "2")
    {
        system("clear");
        cout << "Enter the new number that you want to change to: " << endl;
        string temp_num;
        cin >> temp_num;

        ptr -> set_phone_num(temp_num);

        student *search_ptr = hash_search(ptr);           
        search_ptr -> set_phone_num(temp_num);

        cout << endl;
        cout << "The phone number has been successfully changed to " << ptr -> get_phone_num() << "." << endl;
        cout << endl << endl;

        after_modifying(ptr, pr);
    }

    else if(temp_arg == "3")
    {
        system("clear");
        cout << "Enter the mother's name that you want to change to: " << endl << endl;
        string temp_mname;
        cin.ignore();
        getline(cin, temp_mname);

        ptr -> set_mother_name(temp_mname);

        student *search_ptr = hash_search(ptr);        
        search_ptr -> set_mother_name(temp_mname);

        cout << endl;
        cout << "The mother's name of " << ptr -> get_name() << " has been successfully changed to " << ptr -> get_mother_name() << "." << endl;
        cout << endl << endl;

        after_modifying(ptr, pr);
    }

    else if(temp_arg == "4")
    {
        system("clear");
        cout << "Enter the father's name that you want to change to: " << endl << endl;
        string temp_fname;
        cin.ignore();
        getline(cin, temp_fname);

        ptr -> set_father_name(temp_fname);
        student *search_ptr = hash_search(ptr);
        search_ptr -> set_father_name(temp_fname);

        cout << endl;
        cout << "The father's name of " << ptr -> get_name() << " has been successfully changed to " << ptr -> get_father_name() << "." << endl;
        cout << endl << endl;

        after_modifying(ptr, pr);
    }

    else if(temp_arg == "5")
    {
        proctor_after_login(pr);
    }

    else 
    {
        cout << "Input not recognized. Please try again. " << endl << endl;
        cout << "Press any key to continue......" << endl << endl;
        cin.ignore();
        getch();

        modify_student(ptr, pr);
    }
}

// ------------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------

void after_modifying(student *ptr, proctor &pr)
{
    cout << "What do you want to do next? " << endl << endl;
    cout << "1. Modify anything else. " << endl;
    cout << "2. Go back to your main menu. " << endl;
    cout << endl;

    string temp_arg;
    cin >> temp_arg;

    if(temp_arg == "1")
    {
        modify_student(ptr, pr);
    }

    else if(temp_arg == "2")
    {
        proctor_after_login(pr);
    }

    else
    {
        after_modifying(ptr, pr);
    }
    
}

// ----------------------------------------------STUDENT LOGIN FUNCTION --------------------------------------------------

void student_login()
{
    system("clear");
    cout << "------------------------------------------- STUDENT LOGIN ------------------------------------------------------" << endl << endl;

    cout << "                              Username : ";
    string temp_username;
    cin >> temp_username;
    cout << endl;

    cout << "                              Password : ";
    string temp_password;
    cin >> temp_password;
    cout << endl;

    int flag = 1, sum = 0;

    for(auto x : temp_username)
    {
        sum += (int)x;
    }

    int temp_num = sum % 10;
    student *temp_ptr = hashing_students[temp_num].get_student_front_ptr();

    while(temp_ptr != NULL)
    {
        if(temp_ptr -> get_reg_num() == temp_username && temp_ptr -> get_password() == temp_password)
        {    
            flag = 1;
            student_after_login(temp_ptr);
            break;
        }
        else 
        {
            flag = 0;
        }

        temp_ptr = temp_ptr -> next; 
    }

    if(flag == 0)
    {
        pass_error("student");
    }

}

// -----------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------------

// -------------------------------------------- STUDENT AFTER LOGIN ----------------------------

void student_after_login(student *ptr)
{
    system("clear");
    cout << "                                  Welcome back " << ptr -> get_name() << endl << endl;

    cout << "What would you like to do today? " << endl << endl;

    cout << "1. View if there are any message from proctor. " << endl;
    cout << "2. Message to the proctor. " << endl;
    cout << "3. Check your marks. " << endl;
    cout << "4. Log out from the account. " << endl;
    cout << "5. Go to the homepage." << endl;
    cout << endl;

    string input_user;
    cin >> input_user;

    if(input_user == "1")
    {
        message_check_from_proctor(ptr);
    }

    else if(input_user == "2")
    {
        message_to_proctor_func(ptr);
    }

    else if(input_user == "3")
    {
        student_check_marks(ptr);
    }

    else if(input_user == "4")
    {
        student_login();
    }
    
    else if(input_user == "5")
    {
        go_to_home();
    }
    
    else
    {
        student_after_login(ptr);
    }
    
}

// ------------------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx----------------------------

// ----------------------------------------- STUDENT CHECK THEIR MARKS ------------------------------------

void student_check_marks(student *ptr)
{
    system("clear");
    cout << "Your marks are as follows : " << endl << endl;
    marks *m = ptr -> get_student_marks();
    for(int i = 0; i < ptr -> get_num_of_courses(); i++)
    {
        cout << "Course Name : " << m -> get_course_name() << endl;
        cout << "Course ID   : " << m -> get_course_id() << endl;
        cout << "CAT 1 Score : " << m -> get_cat1() << endl;
        cout << "CAT 2 Score : " << m -> get_cat2() << endl;
        cout << "FAT Score   : " << m -> get_fat() << endl;
        cout << endl;
        m++;
    }

    cout << "Press any key to go to main menu......" << endl << endl;
    cin.ignore();
    getch();

    student_after_login(ptr);

}

// ----------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------

// ------------------------------------------ STUDENT - MESSAGE TO PROCTOR --------------------------------------

void message_to_proctor_func(student *ptr)
{
    system("clear");
    cout << "Enter the message that you want to give to the proctor: " << endl << endl;
    string mssg;
    cin.ignore();
    getline(cin, mssg);

    ptr -> set_message_to_proctor(mssg);
    
    cout << endl;
    cout << "The message has been sent to your proctor." << endl << endl;

    cout << endl;
    cout << "Press any key to head back to the main menu..... " << endl << endl;
    cin.ignore();
    getch();

    student_after_login(ptr);
}

// ------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------------

// ------------------------------------------ STUDENT - MESSAGE FROM PROCTOR -------------------------------------------

void message_check_from_proctor(student *ptr)
{
    system("clear");
    if(ptr -> get_message_from_proctor() == "")
    {
        cout << "There is no message from the proctor. " << endl;
    }
    else
    {
        cout << "The message from the proctor is written below : " << endl << endl;
        cout << ptr -> get_message_from_proctor() << endl << endl;
    }

    cout << endl;
    cout << "Press any key to head back to the main menu..... " << endl << endl;
    cin.ignore();
    getch();

    student_after_login(ptr);
    
}

// ------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------------

// --------------------------------------- PARENT LOGIN -----------------------------

void parent_login()
{
    system("clear");
    cout << "------------------------------------------- PARENT LOGIN ------------------------------------------------------" << endl << endl;

    cout << "                              Username : ";
    string temp_username;
    cin.ignore();
    getline(cin, temp_username);
    cout << endl;

    cout << "                              Password : ";
    string temp_password;
    cin >> temp_password;
    cout << endl;

    int flag = 1, sum = 0;

    student *temp_ptr = hashing_by_parent_name[hash_func(temp_username)].get_student_front_ptr();

    
    while(temp_ptr != NULL)
    {
        if(temp_ptr -> get_father_name() == temp_username && temp_ptr -> get_password_parent() == temp_password)
        {
            flag = 1;
            parent_after_login(temp_ptr);
            break;
        }

        else 
        {
            flag = 0;
        }
        temp_ptr = temp_ptr -> next;
    }
    
    if(flag == 0)
    {
        pass_error("parent");
    }
}   

// --------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx---------------------------

// --------------------------------------- PARENT AFTER LOGIN -----------------------------------------------------

void parent_after_login(student *ptr)
{
    system("clear");
    cout << "                            Welcome back " << ptr -> get_father_name() << endl << endl;

    cout << "What would you like to do today? " << endl << endl;

    cout << "1. View if there are any message from proctor. " << endl;
    cout << "2. Message to the proctor. " << endl;
    cout << "3. Check your ward's marks. " << endl;
    cout << "4. Log out from the account. " << endl;
    cout << "5. Go to the homepage. " << endl;
    cout << endl;

    string input_user;
    cin >> input_user;

    if(input_user == "1")
    {
        message_check_from_proctor_parent(ptr);
    }

    else if(input_user == "2")
    {
        message_to_proctor_func_parent(ptr);
    }

    else if(input_user == "3")
    {
        student_check_marks_parent(ptr);
    }

    else if(input_user == "4")
    {
        parent_login();
    }

    else if(input_user == "5")
    {
        go_to_home();
    }

    else 
    {
        parent_after_login(ptr);
    }
}

// --------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxx ----------------------------------------------

// --------------------------------------- MESSAGE CHECK FROM PROCTOR PARENT -----------------------------------------

void message_check_from_proctor_parent(student *ptr)
{
    system("clear");
    if(ptr -> get_mssg_proc_prnt() == "")
    {
        cout << "There is no message from the proctor. " << endl;
    }
    else 
    {
        cout << "The message from the proctor is written below: " << endl << endl;
        cout << ptr -> get_mssg_proc_prnt() << endl << endl;
    }

    cout << endl;
    cout << "Press any key to head back to the main menu...... " << endl << endl;
    cin.ignore();
    getch();

    parent_after_login(ptr);

}

// ------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------

// ------------------------------------- PARENT MESSAGE TO PROCTOR ------------------------------------------

void message_to_proctor_func_parent(student *ptr)
{
    system("clear");
    cout << "Enter the message that you want to give to the proctor: " << endl << endl;
    string mssg;
    cin.ignore();
    getline(cin, mssg);

    ptr -> set_mssg_prnt_proc(mssg);

    cout << endl;
    cout << "The message has been sent to the proctor." << endl << endl;
    cin.ignore();
    getch();

    parent_after_login(ptr);
}

// ------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------

// ------------------------------------- PARENT CHECKS STUDENTS MARKS ------------------------------------

void student_check_marks_parent(student *ptr)
{
    system("clear");
    cout << "Your ward " << ptr -> get_name() << "'s marks are as follows: " << endl << endl;
    marks *m = ptr -> get_student_marks();
    for(int i = 0; i < ptr -> get_num_of_courses(); i++)
    {
        cout << "Course Name     : " << m -> get_course_name() << endl;
        cout << "Course ID       : " << m -> get_course_id() << endl;
        cout << "CAT 1 Score     : " << m -> get_cat1() << endl;
        cout << "CAT 2 Score     : " << m -> get_cat2() << endl;
        cout << "FAT Score       : " << m -> get_fat() << endl;
        cout << endl;
        m++;
    }

    cout << "Press any key to go to main menu...... " << endl << endl;
    cin.ignore();
    getch();

    parent_after_login(ptr);
}

// ------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------

// --------------------------------------- LOADING THE EXISTING STUDENT DATA INTO HASH ----------------------------------------

void hashing_the_student_info()
{

    for(int i = 0; i < 3; i++)
    {
        student *ptr = proctor_data[i].get_front_student();
        while(ptr != NULL)
        {
            string s = ptr -> get_reg_num(); 
            int sum = 0;
            for(auto x : s)
            {
                sum += (int)x;
            }

            int temp_num = sum % 10;

            // don't mess with this "ptr" pointer

            student *ptr_temp = new student;
            ptr_temp -> set_name(ptr -> get_name());
            ptr_temp -> set_proctor_id(ptr -> get_proctor_id());
            ptr_temp -> set_reg_num(ptr -> get_reg_num());
            ptr_temp -> set_phone_num(ptr -> get_phone_num());
            ptr_temp -> set_password(ptr -> get_password());
            ptr_temp -> set_father_name(ptr -> get_father_name());
            ptr_temp -> set_mother_name(ptr -> get_mother_name());
            ptr_temp -> set_message_from_proctor(ptr -> get_message_from_proctor());

            marks *m = ptr -> get_student_marks();
            for(int itr = 0; itr < 3; itr++)
            {
                ptr_temp -> set_student_marks(m -> get_course_name(), m -> get_course_id(), m -> get_cat1(), m -> get_cat2(), m -> get_fat());
                m++;
            }
            ptr_temp -> set_password_parent(ptr -> get_password_parent());
            ptr_temp -> set_mssg_prnt_proc(ptr -> get_mssg_prnt_proc());
            ptr_temp -> set_mssg_proc_prnt(ptr -> get_mssg_proc_prnt());

            ptr_temp -> next = NULL;

            hashing_students[temp_num].add(ptr_temp);
            hashing_by_parent_name[hash_func(ptr -> get_father_name())].add(ptr_temp);

            ptr = ptr -> next;
        }
    }
}

// ------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------

// ------------------------------------------- HASH FUNCTION ------------------------------------

int hash_func(string s)
{
    int sum = 0;
    for(auto x : s)
    {
        sum += (int)x;
    }

    return sum % 10;
}

// ----------------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ---------------------------------

// ---------------------------------------- SEARCHING THROUGH HASH FUNCTION -------------------------------------

student *hash_search(student *ptr)
{
    student *temp = hashing_students[hash_func(ptr -> get_reg_num())].get_student_front_ptr();
    while(temp != NULL)
    {
        if(temp -> get_reg_num() == ptr -> get_reg_num())
        {
            break;
        }
        temp = temp -> next;
    }

    return temp;
}

// ------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -------------------------------------

// ----------------------------------------- SEARCHING HASH TABLE WITH ARG. REG. NUM ---------------------------------------

student *hash_search(string reg)
{
    student *temp = hashing_students[hash_func(reg)].get_student_front_ptr();
    while(temp != NULL)
    {
        if(temp -> get_reg_num() == reg)
        {
            break;
        }
        temp = temp -> next;
    }

    return temp;
}

// ------------------------------------------ xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------------

// ------------------------------------------ FUNCTION TO LOAD STUDENT DATA ---------------------------------------

void enter_data(proctor *p)
{
    p -> set_students("Kaustubh", "19BCE0617", "8868888227", "Kaustubh0617", "Jay Shankar", "Priya Shankar", "jay_s");
    p -> set_students("Shaswat", "19BCE0673", "8235387342", "Shaswat0673", "Delhi", "Dhaka", "delhi73");
    p -> set_students("Saurabh", "19BCE0634", "6377288941", "Saurabh0634", "Madrid", "Kyoto", "madrid34");
    p -> set_students("Moscow", "19BCE0654", "4523974267", "Moscow0654", "Colombo", "Montreal", "colombo54");
    p -> set_students("Denver", "19BCE0645", "4556871025", "Denver0645", "Warsaw", "Harare", "warsaw45");
    
    student *ptr = p -> get_front_student();
    while(ptr != NULL)
    {
        ptr -> set_student_marks("Data Structures and Algorithms", "CSE2001", 35, 30, 95);
        ptr -> set_student_marks("Discrete Mathematics and Graph Theory", "MAT2001", 34, 43, 90);
        ptr -> set_student_marks("Statistics for Engineers", "MAT3001", 45, 23, 90);
        ptr = ptr -> next;
    }


    
    p++;
    p -> set_students("Tokyo", "19BCE0621", "8962475334", "Tokyo0621", "Congo", "Istanbul", "congo21");
    p -> set_students("Oslo", "19BCE0631", "4886044452", "Oslo0631", "Dubai", "Riyadh", "dubai31");
    p -> set_students("Helsinki", "19BCE0637", "8883456025", "Helsinki0637", "Ottawa", "CapeTown", "Ottawa37");
    p -> set_students("Nairobi", "19BCE0647", "1453522025", "Nairobi0647", "Johannesburg", "Cairo", "johannesburg47");
    p -> set_students("Berlin", "19BCE0627", "4844155875", "Berlin0627", "Paris", "London", "paris27"); 
    
    ptr = p -> get_front_student();
    while(ptr != NULL)
    {
        ptr -> set_student_marks("Data Structures and Algorithms", "CSE2001", 35, 30, 95);
        ptr -> set_student_marks("Discrete Mathematics and Graph Theory", "MAT2001", 34, 43, 90);
        ptr -> set_student_marks("Statistics for Engineers", "MAT3001", 45, 23, 90);
        ptr = ptr -> next;
    }
    
    p++;
    p -> set_students("Stockholm", "19BCE0817", "4852145524", "Stockholm0817", "Athens", "Zurich", "athens17");
    p -> set_students("Lisbon", "19BCE0017", "7785221456", "Lisbon0017", "Sofia", "Algeirs", "sofia17");
    p -> set_students("Rio", "19BCE0621", "4646467954", "Rio0621", "Brussels", "Vienna", "brussels21");
    p -> set_students("Palermo", "19BCE0643", "4889241236", "Palermo0643", "Copenhagen", "Belarus", "copenhagen43");
    p -> set_students("Bogota", "19BCE0691", "7852101456", "Bogota0691", "Amsterdam", "Dublin", "amsterdam91");

    ptr = p -> get_front_student();
    while(ptr != NULL)
    {
        ptr -> set_student_marks("Data Structures and Algorithms", "CSE2001", 35, 30, 95);
        ptr -> set_student_marks("Discrete Mathematics and Graph Theory", "MAT2001", 34, 43, 90);
        ptr -> set_student_marks("Statistics for Engineers", "MAT3001", 45, 23, 90);
        ptr = ptr -> next;
    }

    
}

// ---------------------------------- xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx -----------------------------------------

int main()
{
    
    // -------------------------- Student data loaded from here----------------------------------------------------
    proctor *p = new proctor;
    p = &proctor_data[0];
    enter_data(p);

    // ----------------------------------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx------------------------


    //cout << p -> get_count_students() << endl;
    /*
    for(int i = 0; i < 3; i++)
    {
        p -> get_student_name();
        p++;
        cout << endl;
    }
    */

    hashing_the_student_info();    

    go_to_home();
   
    return 0;
}