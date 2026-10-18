/* speed.exe 00847b70 FUN_00847b70; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 */

undefined4 FUN_00847b70(int param_1,char *param_2)

{
  int iVar1;
  
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
      (iVar1 = FUN_007c97c0(param_2,0x2f), iVar1 == 0)) &&
     (iVar1 = FUN_007c97c0(param_2,0x40), iVar1 == 0)) {
    if ((*(int *)(param_1 + 0x20) == 0) && (iVar1 = FUN_007c97c0(param_2,0x2e), iVar1 != 0)) {
      return 0xfffffffd;
    }
    return 0;
  }
  return 0xfffffffd;
}

