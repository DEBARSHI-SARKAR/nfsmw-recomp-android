/* speed.exe 00559ac0 FUN_00559ac0; analysis pseudocode, not buildable source.
 * calls 006cbf00 FUN_006cbf00
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00660200 FUN_00660200
 * calls 006cbee0 FUN_006cbee0
 * calls 0054f9a0 FUN_0054f9a0
 * calls 00660270 FUN_00660270
 * calls 00516be0 FUN_00516be0
 */

void FUN_00559ac0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(3,8,9);
  }
  uVar2 = FUN_00660270(param_1,0x10,9);
  iVar1 = FUN_00660270(param_3,1,9);
  param_3 = iVar1 != 0;
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  FUN_006cbee0();
  *(short *)(DAT_0091cb20 + 0x48) = (short)uVar2;
  *(short *)(DAT_0091cb20 + 0x4a) = (short)uVar2;
  FUN_006cbf00(uVar2,&param_2);
  *(undefined1 *)(DAT_0091cb20 + 0x15) = param_3;
  if (*(char *)(DAT_0091cb20 + 0x19) != '\0') {
    iVar1 = *(int *)(DAT_0091cb20 + 0xcc);
    FUN_0054f9a0();
    *(undefined1 *)(iVar1 + 0x68) = 0;
    return;
  }
  FUN_00516be0(0x461a18ee,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
  return;
}

