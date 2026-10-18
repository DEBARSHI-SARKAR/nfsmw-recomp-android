/* speed.exe 007361e0 FUN_007361e0; analysis pseudocode, not buildable source.
 * calls 0078b260 FUN_0078b260
 * calls 007a12e0 FUN_007a12e0
 */

undefined4 __fastcall FUN_007361e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0078b260();
  if ((*(char *)(param_1 + 0x118) != '\x01') && (iVar2 == 0)) {
    return 0;
  }
  if (DAT_009b416c != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1144);
      if ((((iVar1 != 4) && (iVar1 != 6)) && (iVar1 != 0)) && (iVar1 != 5)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1170) = 0xc;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1144);
      if (((iVar1 != 4) && (iVar1 != 6)) && ((iVar1 != 0 && (iVar1 != 5)))) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1170) = 0xc;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1144);
      if (((iVar1 != 4) && (iVar1 != 6)) && ((iVar1 != 0 && (iVar1 != 5)))) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1170) = 0xc;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x1144);
      if ((((iVar1 != 4) && (iVar1 != 6)) && (iVar1 != 0)) && (iVar1 != 5)) {
        *(undefined4 *)(iVar2 + 0x1144) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1170) = 0xc;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0x1144);
  iVar3 = 5 - (uint)(*(char *)(param_1 + 0x118) != '\x01');
  if ((((iVar1 != 4) && (iVar1 != 6)) && ((iVar1 != 0 && ((iVar1 != 5 && (iVar3 != iVar1)))))) &&
     (*(int *)(iVar2 + 0x1144) = iVar3, iVar3 == 2)) {
    *(undefined4 *)(iVar2 + 0x1258) = 80000;
    *(undefined4 *)(iVar2 + 0x1254) = 24000;
    *(undefined4 *)(iVar2 + 0x1260) = 0;
  }
  *(undefined4 *)(iVar2 + 0x1170) = 0xc;
  FUN_007a12e0();
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return 1;
}

