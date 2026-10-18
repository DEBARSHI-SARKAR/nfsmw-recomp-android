/* speed.exe 00543be0 FUN_00543be0; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00543920 FUN_00543920
 * calls 00525220 FUN_00525220
 * calls 005277f0 FUN_005277f0
 * calls 00515e90 FUN_00515e90
 * calls 00516be0 FUN_00516be0
 */

void __thiscall FUN_00543be0(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_005277f0(param_2);
  DAT_0091cbac = DAT_0091cbac | param_3 & 0xf000000;
  FUN_00543920(0,0,0);
  FUN_00543920(1,1,0);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xfb8b67d1,0x417b2601);
  FUN_00515e90(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
  FUN_00543920(2,0,0);
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0x74) != '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 1;
    FUN_00516be0(0xc0f2ae7c,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_005af1c0("INITIALIZE_SCREEN");
    FUN_00516be0(uVar2,uVar1,0xfffffffc,0xff);
    *(undefined1 *)(DAT_0091cb20 + 0x26) = *(undefined1 *)(param_1 + 0x74);
  }
  return;
}

