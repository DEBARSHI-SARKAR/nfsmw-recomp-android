/* speed.exe 0054fb00 FUN_0054fb00; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00527890 FUN_00527890
 * calls 00543920 FUN_00543920
 * calls 00543af0 FUN_00543af0
 * calls 0054f9a0 FUN_0054f9a0
 * calls 0054fa70 FUN_0054fa70
 * calls 00515e90 FUN_00515e90
 * calls 00516be0 FUN_00516be0
 */

void __thiscall
FUN_0054fb00(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00527890();
  FUN_0054f9a0();
  FUN_0054fa70(param_2);
  switch(param_3) {
  case 1:
    if (param_4 != 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      FUN_00543920(0,0,0);
      FUN_00543920(1,1,param_4);
      FUN_00543920(2,0,0);
    }
    FUN_00515e90(*(undefined4 *)(param_1 + 0x10),(&DAT_0089a644)[param_4 != 0]);
    *(undefined1 *)(param_1 + 0x68) = 1;
    DAT_0091cbcc = DAT_0091cbac & 0xf000000;
    DAT_0091cbac = DAT_0091cbac & 0xf0ffffff;
    break;
  case 2:
    FUN_00543af0(param_4,param_5,0);
    break;
  case 3:
    FUN_00543af0(param_4,param_5,param_6);
    break;
  default:
    *(undefined1 *)(DAT_0091cb20 + 0x14) = 0;
  }
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

