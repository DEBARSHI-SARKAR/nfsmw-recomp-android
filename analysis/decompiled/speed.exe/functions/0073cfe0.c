/* speed.exe 0073cfe0 FUN_0073cfe0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0073cfe0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      return *(undefined4 *)(iVar1 + 0x23c);
    }
    if ((*(int *)(iVar1 + 0x23c) != 0) || (*(int *)(iVar1 + 0x240) != 0)) {
      return 1;
    }
  }
  return 0;
}

