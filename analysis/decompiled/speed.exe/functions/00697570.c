/* speed.exe 00697570 FUN_00697570; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

void __thiscall FUN_00697570(int param_1,float *param_2,char param_3)

{
  int iVar1;
  
  FUN_00401670(param_2,**(int **)(param_1 + 0x30) + 0x70,param_2);
  if (param_3 != '\0') {
    iVar1 = **(int **)(param_1 + 0x30);
    *param_2 = *(float *)(iVar1 + 0x10) + *param_2;
    param_2[1] = *(float *)(iVar1 + 0x14) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x18) + param_2[2];
  }
  return;
}

