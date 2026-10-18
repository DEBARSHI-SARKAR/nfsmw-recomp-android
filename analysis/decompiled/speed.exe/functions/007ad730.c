/* speed.exe 007ad730 FUN_007ad730; analysis pseudocode, not buildable source.
 * calls 0056f120 FUN_0056f120
 * calls 0056f670 FUN_0056f670
 * calls 0056f630 FUN_0056f630
 * calls 007a34f0 FUN_007a34f0
 */

void __thiscall FUN_007ad730(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  *(int *)(param_1 + 8) = param_2;
  iVar2 = FUN_0056f120(*(undefined1 *)(param_2 + 0x11));
  *(int *)(param_1 + 4) = iVar2;
  if (DAT_009b9e78 == '\0') {
    if (DAT_009b9e70 != 0) {
      *(char *)(iVar2 + 3) = (char)DAT_009b9e70;
      *(undefined1 *)(*(int *)(param_1 + 4) + 2) = DAT_009b9e74;
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 2) = DAT_009b9e74;
    *(undefined1 *)(*(int *)(param_1 + 4) + 3) = DAT_009b9e74;
    FUN_0056f630(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  if (DAT_009b9e7b != '\0') {
    do {
      cVar1 = FUN_0056f670();
    } while (cVar1 == '\0');
  }
  FUN_007a34f0();
  return;
}

