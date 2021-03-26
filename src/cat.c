/*
 * /I/We declare  that  this  material,  which  I/We now  submit for  assessment, is  entirely  my/our own work and has not been
 * taken from the work of others, save and to the extent that such work  has  been  cited  and  acknowledged  within  the  text
 * of my/our work.  I/We understand that  plagiarism,  collusion,  and  copying  are  grave  and  serious  offences  in the
 * university  and accept  the  penalties  that  would  be  imposed  should  I  engage  in  plagiarism,  collusion  or copying.
 * I/We have read and understood the Assignment Regulations. I/We have identified and  included  the  source  of  all  facts,
 * ideas,  opinions,  and  viewpoints  of  others  in  the assignment  references.  Direct  quotations  from  books,  journal
 * articles,  internet  sources, module  text,  or  any  other  source  whatsoever  are  acknowledged  and  the  source  cited
 * are identified  in  the  assignment  references.  This  assignment,  or  any  part  of  it,  has  not  been previously
 * submitted  by  me/us or  any  other  person  for  assessment  on  this  or  any  other course of study.
 *
 * I/We have read and understood the referencing guidelines found at http://www.dcu.ie/info/regulations/plagiarism.shtml,
 * https://www4.dcu.ie/students/az/plagiarismand/or recommended in the assignment guidelines.
 *
 * Name: Malachy Byrne
 * Student Number: 19463716
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        printf("Error: no file provided\n");
        return 1;
    }
    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: file does not exist\n");
        return 1;
    }
    char* line = (char*) calloc(256, sizeof(char));
    while (fgets(line, 256, file)) {
        printf("%s", line);
    }
    printf("\n");
    return 0;
}