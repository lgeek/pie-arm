#ifndef __PIE_ARM_PROT_H__
#define __PIE_ARM_PROT_H__
void d_b (
	unsigned int **address,
	unsigned int offset_branch
);
void d_beq (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bne (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bcs (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bcc (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bmi (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bpl (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bvs (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bvc (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bhi (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bls (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bge (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blt (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bgt (
	unsigned int **address,
	unsigned int offset_branch
);
void d_ble (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bl (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bleq (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blne (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blcs (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blcc (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blmi (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blpl (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blvs (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blvc (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blhi (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blls (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blge (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bllt (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blgt (
	unsigned int **address,
	unsigned int offset_branch
);
void d_blle (
	unsigned int **address,
	unsigned int offset_branch
);
void d_bx (
	unsigned int **address,
	unsigned int rn
);
void d_bxeq (
	unsigned int **address,
	unsigned int rn
);
void d_bxne (
	unsigned int **address,
	unsigned int rn
);
void d_bxcs (
	unsigned int **address,
	unsigned int rn
);
void d_bxcc (
	unsigned int **address,
	unsigned int rn
);
void d_bxmi (
	unsigned int **address,
	unsigned int rn
);
void d_bxpl (
	unsigned int **address,
	unsigned int rn
);
void d_bxvs (
	unsigned int **address,
	unsigned int rn
);
void d_bxvc (
	unsigned int **address,
	unsigned int rn
);
void d_bxhi (
	unsigned int **address,
	unsigned int rn
);
void d_bxls (
	unsigned int **address,
	unsigned int rn
);
void d_bxge (
	unsigned int **address,
	unsigned int rn
);
void d_bxlt (
	unsigned int **address,
	unsigned int rn
);
void d_bxgt (
	unsigned int **address,
	unsigned int rn
);
void d_bxle (
	unsigned int **address,
	unsigned int rn
);
void d_adc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adceq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adccs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adccc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adchi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adclt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adci (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_adcile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_add (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_addile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_and (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_andile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bic (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_biceq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_biccs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_biccc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bichi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_biclt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bici (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_bicile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_cmn (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmneq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnne (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmncs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmncc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnpl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnhi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnls (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnge (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnlt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmngt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnle (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmni (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnieq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnine (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnics (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnicc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnimi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnipl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnivs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnivc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnihi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnils (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnige (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnilt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnigt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmnile (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmp (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpeq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpne (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpcs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpcc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmppl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmphi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpls (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpge (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmplt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpgt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmple (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpieq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpine (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpics (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpicc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpimi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpipl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpivs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpivc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpihi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpils (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpige (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpilt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpigt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_cmpile (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_eor (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eoreq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eormi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eori (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eoricc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eoripl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_eorile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_mov (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_moveq (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movne (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movls (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movge (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movle (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movine (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movics (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movils (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movige (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_movile (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvn (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvneq (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnne (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvncs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvncc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnls (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnge (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvngt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnle (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvni (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnine (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnics (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnils (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnige (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_mvnile (
	unsigned int **address,
	unsigned int rd,
	unsigned int operand2
);
void d_orr (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orreq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orri (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orricc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orripl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_orrile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsb (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsblt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsble (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsbile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsceq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsccs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsccc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rschi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsclt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rsci (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_rscile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbceq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbccs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbccc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbchi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbclt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbci (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sbcile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sub (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_submi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_sublt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_suble (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_subile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void d_teq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqeq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqne (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqcs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqcc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqpl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqhi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqls (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqge (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqlt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqgt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqle (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqieq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqine (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqics (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqicc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqimi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqipl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqivs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqivc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqihi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqils (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqige (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqilt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqigt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_teqile (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tst (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tsteq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstne (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstcs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstcc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstpl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tsthi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstls (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstge (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstlt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstgt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstle (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tsti (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstieq (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstine (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstics (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tsticc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstimi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstipl (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstivs (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstivc (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstihi (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstils (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstige (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstilt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstigt (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_tstile (
	unsigned int **address,
	unsigned int rn,
	unsigned int operand2
);
void d_mul (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_muleq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mullt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mulle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void d_mla (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlaeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlane (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlacs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlacc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlami (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlapl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlavs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlavc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlahi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlals (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlage (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlalt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlagt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_mlale (
	unsigned int **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void d_ldrb (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrblt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrble (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrbile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldr (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldreq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldri (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldricc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldripl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldrile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strb (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbeq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strblt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strble (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbicc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbipl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strbile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_str (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_streq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strne (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strcs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strcc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strmi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strpl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strvs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strvc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strhi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strls (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strge (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strlt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strgt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strle (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_stri (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strieq (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strine (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strics (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_stricc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strimi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_stripl (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strivs (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strivc (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strihi (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strils (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strige (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strilt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strigt (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_strile (
	unsigned int **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void d_ldm (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmeq (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmne (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmcs (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmcc (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmpl (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmhi (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmls (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmge (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmlt (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmgt (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_ldmle (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stm (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmeq (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmne (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmcs (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmcc (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmmi (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmpl (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmvs (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmvc (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmhi (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmls (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmge (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmlt (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmgt (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_stmle (
	unsigned int **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void d_swi (
	unsigned int **address,
	unsigned int comment
);
void d_swieq (
	unsigned int **address,
	unsigned int comment
);
void d_swine (
	unsigned int **address,
	unsigned int comment
);
void d_swics (
	unsigned int **address,
	unsigned int comment
);
void d_swicc (
	unsigned int **address,
	unsigned int comment
);
void d_swimi (
	unsigned int **address,
	unsigned int comment
);
void d_swipl (
	unsigned int **address,
	unsigned int comment
);
void d_swivs (
	unsigned int **address,
	unsigned int comment
);
void d_swivc (
	unsigned int **address,
	unsigned int comment
);
void d_swihi (
	unsigned int **address,
	unsigned int comment
);
void d_swils (
	unsigned int **address,
	unsigned int comment
);
void d_swige (
	unsigned int **address,
	unsigned int comment
);
void d_swilt (
	unsigned int **address,
	unsigned int comment
);
void d_swigt (
	unsigned int **address,
	unsigned int comment
);
void d_swile (
	unsigned int **address,
	unsigned int comment
);
#endif
