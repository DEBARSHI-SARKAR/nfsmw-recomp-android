/* speed.exe 00520340 FUN_00520340; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 */

void __fastcall FUN_00520340(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    *(undefined4 *)(iVar1 + 0x60) = 0x5b2b70f;
    if (DAT_0091dd08 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091dd08)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  pcVar2 = *(char **)(param_1 + 0x18c);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\0')) {
    FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_008941f8,pcVar2);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar1 + 0x60) = 0xbb298a80;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
        (**(code **)*DAT_0091dd08)(iVar1);
      }
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
      return;
    }
  }
  return;
}

