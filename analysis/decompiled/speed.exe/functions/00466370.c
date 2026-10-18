/* speed.exe 00466370 FUN_00466370; analysis pseudocode, not buildable source.
 * calls 00465d80 FUN_00465d80
 */

void FUN_00466370(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_0090e648 == (undefined4 *)0x0) {
    DAT_0090e648 = (undefined4 *)FUN_00465d80(0xc,param_1,"bPNode SlotPool",0);
    if (DAT_0090e648 == (undefined4 *)0x0) {
      DAT_0090e64c = DAT_0090e648;
      return;
    }
    if (DAT_00910ef8 == 1) {
      *DAT_00910f00 = DAT_0090e648;
      puVar1 = DAT_0090e648;
      DAT_0090e648[1] = DAT_00910f00;
      DAT_00910f00 = puVar1;
      *DAT_0090e648 = &DAT_00910efc;
    }
    DAT_0090e64c = (undefined4 *)0x0;
  }
  return;
}

