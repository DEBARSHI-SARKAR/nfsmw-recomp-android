/* speed.exe 00519550 FUN_00519550; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005af1c0 FUN_005af1c0
 */

void __thiscall FUN_00519550(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x74) != param_2) {
    *(char *)(param_1 + 0x74) = param_2;
    FUN_00516be0((-(uint)(param_2 != '\0') & 0x71bd54c7) + 0x4f3559b5,
                 *(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    if (param_2 != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_005af1c0("INITIALIZE_SCREEN");
      FUN_00516be0(uVar2,uVar1,0xfffffffc,0xff);
    }
    *(undefined1 *)(DAT_0091cb20 + 0x26) = *(undefined1 *)(param_1 + 0x74);
  }
  return;
}

