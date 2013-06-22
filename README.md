		
**DIGIT-RECOGNITION**	
---------------------
---------------------
*We have 1500 bitmaps of digits and our aim is to recognize them.

Two Algorithms Implemented:-
<ol>
<li>Constructing the average matrix from all the possible bitmaps corrosponding to all individual digit and then finding the closest match.</li>
<li>k-nearest neighbours.</li>
</ol>

**Instructions**
----------------

**Steps:**
1)./digit create_tr_data => creates a file named trainingdata.txt
2)./digit break_digitwise => creates 10 files corrosponding to each digit
3)./digit break_samplewise => breaks our data set into 1500 files corrosponding to each data point
4)./digit ave_construct => constructs 10 files containing average matrices corrosponding to each digit(seperately in each file)
  required in method 1
These all steps are to be executed only once and in the given sequence

*Now,*

**A)Method -1**
i)./digit m1 acc => calculates accuracy of the method
ii)./digit m1 data/45.txt => calculates value of the 45th sample according to this method.

	
**B)Method -2**
i)./digit m2 acc => calculates accuracy of the method
ii)./digit m2 data/45.txt => calculates value of the 45th sample according to this method.
