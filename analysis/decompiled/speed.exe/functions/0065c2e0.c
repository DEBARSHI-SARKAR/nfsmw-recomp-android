/* speed.exe 0065c2e0 FUN_0065c2e0; analysis pseudocode, not buildable source.
 * calls 0056f0c0 FUN_0056f0c0
 * calls 0057f530 FUN_0057f530
 * calls 004ae8f0 FUN_004ae8f0
 * calls 006530b0 FUN_006530b0
 * calls 00516c50 FUN_00516c50
 */

void __thiscall FUN_0065c2e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  param_2 = param_2 * 0x34;
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x32 + param_2) != '\0') {
    FUN_006530b0(*(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 + 0x28));
    cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x30 + param_2);
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x30 + param_2) = 1;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c + param_2);
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_004ae8f0(4);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x20 + param_2);
      if (iVar2 == 0) {
        DAT_00926124 = 1;
        return;
      }
      if (iVar2 == 1) {
        DAT_00926126 = 1;
        DAT_00926125 = 1;
        return;
      }
      if (iVar2 == 2) {
        DAT_0092612c = 0;
        return;
      }
      if (iVar2 == 3) {
        FUN_00516c50(0x98257537,0,0xff);
        return;
      }
      if (iVar2 == 4) {
        FUN_00516c50(0x6521e5c2,0,0xff);
        FUN_0056f0c0();
        return;
      }
      if (iVar2 == 5) {
        FUN_00516c50(0xa6813b08,0,0xff);
        FUN_0057f530();
      }
    }
  }
  return;
}

