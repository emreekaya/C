#define M 3 // Maximum number of course sections
#define N 100 // Maximum number of students in course section

struct student 
{
  int   stunumber;
  char  stuname[20];
};


struct course 
{
  char  coursecode[10];
  int   CRN; // Section number
  char  coursename[30];
  struct student liste[N]; // Registered students
};


struct course Sube[M] = {
 { "Bil105e", 20960, "Intr to Sci&Eng Comp (C)",
   { 40050278,"Ahmet Gokce",
     40030379,"Busra Yuksel",
     40040273,"Ilker Akin" } },

 { "Bil105e", 20961, "Intr to Sci&Eng Comp (C)",
   { 40040232,"Deniz Demir",
     40040235,"Hulya Ertunc" } },

 { "Bil105e", 20962, "Intr to Sci&Eng Comp (C)",
    { 40050227,"Fatih Coskun",
      40050241,"Kemal Yaylali" } }
};      
