/* speed.exe 00519730 FUN_00519730; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005af1c0 FUN_005af1c0
 */

void FUN_00519730(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0091cbb8;
  DAT_0091cbc4 = param_1;
  if (*(char *)(DAT_0091cb20 + 0x26) == '\0') {
    uVar2 = FUN_005af1c0("EXIT_COMPLETE");
    FUN_00516be0(uVar2,uVar1,0xffffffff,0xff);
    *(undefined1 *)(DAT_0091cb20 + 0x26) = 0;
    return;
  }
  uVar2 = FUN_005af1c0("LEAVE_SCREEN");
  FUN_00516be0(uVar2,uVar1,0xfffffffc,0xff);
  *(undefined1 *)(DAT_0091cb20 + 0x26) = 0;
  return;
}

