/* speed.exe 00505350 FUN_00505350; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

void FUN_00505350(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_00503400(*(undefined4 *)((int)&DAT_008f2434 + uVar2),0,0);
    *(undefined4 *)((int)&DAT_00915114 + uVar2) = uVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  return;
}

