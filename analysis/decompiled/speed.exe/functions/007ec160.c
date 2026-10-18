/* speed.exe 007ec160 FUN_007ec160; analysis pseudocode, not buildable source.
 * calls 007ec0f0 FUN_007ec0f0
 * calls 007c9b40 _vsprintf
 */

void FUN_007ec160(char *param_1)

{
  char local_204 [512];
  
  _vsprintf(local_204,param_1,&stack0x00000008);
  (*(code *)PTR_FUN_009076bc)(&DAT_008941f8,local_204);
  return;
}

