/* speed.exe 008372f0 FUN_008372f0; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 0083df40 FUN_0083df40
 */

void FUN_008372f0(int *param_1,char *param_2)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (param_1[4] != 0)) &&
     (iVar1 = *(int *)(param_1[4] + 0xc0), iVar1 != 0)) {
    FUN_0083df40(param_2,100,*param_1 + 0x35,0x2a,iVar1);
    return;
  }
  _strncpy(param_2,(char *)(*param_1 + 0x35),100);
  return;
}

