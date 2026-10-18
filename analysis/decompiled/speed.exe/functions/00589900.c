/* speed.exe 00589900 FUN_00589900; analysis pseudocode, not buildable source.
 * calls 0054e890 FUN_0054e890
 * calls 00515960 FUN_00515960
 * calls 0054e8e0 FUN_0054e8e0
 * calls 00514fd0 FUN_00514fd0
 * calls 00575590 FUN_00575590
 * calls 00575710 FUN_00575710
 */

void __fastcall FUN_00589900(int param_1)

{
  char cVar1;
  float local_8;
  undefined1 local_4 [4];
  
  *(undefined4 *)(param_1 + 0x58) = 0x2711;
  if (*(char *)(param_1 + 3) == '\0') {
    cVar1 = FUN_0054e890(*(undefined4 *)(param_1 + 0x44));
    if (cVar1 == '\0') {
      cVar1 = FUN_0054e890(*(undefined4 *)(param_1 + 0x40));
      if (cVar1 != '\0') {
        FUN_00575710();
      }
    }
    else {
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_00515960((float *)(param_1 + 8),(float *)(param_1 + 0xc));
      FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),&local_8,local_4);
      *(float *)(param_1 + 0x18) = ABS(local_8 - *(float *)(param_1 + 8));
      FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),local_4,&local_8);
      *(float *)(param_1 + 0x1c) = ABS(local_8 - *(float *)(param_1 + 0xc));
    }
    if (DAT_00987f72 != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00575590();
    return;
  }
  cVar1 = FUN_0054e8e0(*(undefined4 *)(param_1 + 0x48));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    return;
  }
  cVar1 = FUN_0054e8e0(*(undefined4 *)(param_1 + 0x4c));
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  return;
}

