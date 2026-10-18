/* speed.exe 004e3350 FUN_004e3350; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004e3350(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 0x60 + *(int *)(param_1 + 0x5c);
  if ((iVar1 != 0) && ((int)(param_2 & 0xff) < *(int *)(iVar1 + 0x54))) {
    return *(int *)(iVar1 + 0xc) + (param_2 & 0xff) * 8;
  }
  return 0;
}

