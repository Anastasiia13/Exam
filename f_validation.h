

 bool valid_student_first_name(string student_first_name[]) {
 	if (strlen(student_first_name)>0 && strlen(student_first_name)<30){
 	printf("valid first name");}
 	return true;
 }

 bool valid_student_last_name(string student_last_name[]) {
 	if (strlen(student_last_name)>0 && strlen(student_last_name)<30){
 	printf("valid last name");}
 	return true;
 }
 
 bool valid_stud_age(int student_age){
 	if (student_age>15 && student_age<120){
 		printf("valid age");
	 } return true;
 }
 
 bool valid_student_mark(int student_mark){
 	 	if (student_mark>0 && student_mark<100){
 		printf("valid mark");
	 } return true;
 }


 bool valid_student_group(string student_group[]) {
 	if (strlen(student_group)>0 && strlen(student_group)<30){
 	printf("valid group");}
 	return true;
 }

 bool valid_teacher_name(string teacher_name[]) {
 	if (strlen(teacher_name)>0 && strlen(teacher_name)<30){
 	printf("valid name");}
 	return true;
 }

bool valid_teacher_subject(string teacher_subject[]){
		if (strlen(teacher_subject)>0 && strlen(teacher_subject)<40){
 	printf("valid subject");}
	return true;
}  

