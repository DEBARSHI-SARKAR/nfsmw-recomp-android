/* speed.exe 007ee851 FUN_007ee851; analysis pseudocode, not buildable source.
 * calls 007ed545 FUN_007ed545
 */

undefined8 __fastcall FUN_007ee851(int param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*DAT_009076dc + 4))(*(undefined4 *)(param_1 + 0x30),0);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(int *)(param_1 + 0x14) != -1)) {
    FUN_007ed545();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != -1) {
      iVar2 = iVar1 >> 0x1f;
      goto LAB_007ee87c;
    }
  }
  iVar1 = 0;
  iVar2 = 0;
LAB_007ee87c:
  return CONCAT44(iVar2,iVar1);
}

