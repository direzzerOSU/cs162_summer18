// a2 header
#define Member_H
#ifndef Member_H

class Member{
private:
   std::string name;
   std::string date;
   int age;
   char gender;
public:
   Member()
   setName(std::string name);
   getName();
   setDate();
   getDate();
   setAge(int age);
   getAge();
   setGender(char x);
   getGender();
};

class List{
private:
   int count = 0;
   Member* list = new Member[count];
public:
   List();
   addMember();
   removeMember();
   print();
};
#endif
