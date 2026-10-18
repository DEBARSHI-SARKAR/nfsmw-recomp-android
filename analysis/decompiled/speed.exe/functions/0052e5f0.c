/* speed.exe 0052e5f0 FUN_0052e5f0; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 * calls 005252d0 FUN_005252d0
 */

void __fastcall FUN_0052e5f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc10(0xe21d083c,*(int *)(DAT_0091cf90 + 0x10) + 0x314);
  FUN_005252d0(uVar1,0x1232703a,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056db00();
  uVar2 = FUN_0056bc10(0x6031106e,uVar2);
  FUN_005252d0(uVar1,0xeb406fec,uVar2);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x1e4fda,
               (-(uint)(DAT_0091ca34 != '\0') & 0x3ff4b410) + 0x56e940f4);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xdd2f4fb,
               (-(uint)(DAT_0091ca34 != '\0') & 0xacc07df0) + 0xa88b3fc5);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9ae9b5cd,
               (-(uint)(DAT_0091ca34 != '\0') & 0xacc07df0) + 0xa88b3fc5);
  return;
}

