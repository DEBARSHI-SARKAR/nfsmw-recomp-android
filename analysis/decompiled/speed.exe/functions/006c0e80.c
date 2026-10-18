/* speed.exe 006c0e80 FUN_006c0e80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006c0e80(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  piVar1 = DAT_00982bdc;
  param_1[2] = *param_3;
  *param_1 = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  uStack_14 = 0;
  param_1[3] = *param_3 << 2;
  param_1[8] = 0x18;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uStack_20 = *param_2;
  uStack_1c = 0;
  uStack_24 = 0x208;
  iStack_28 = (param_1[3] + 10) * 0x18;
  piStack_2c = piVar1;
  uStack_30 = 0x6c0ee1;
  puStack_18 = param_1;
  (**(code **)(*piVar1 + 0x68))();
  uStack_30 = 0;
  param_1 = param_1 + 1;
  psVar3 = (short *)(*param_3 * 0xc);
  (**(code **)(*piVar1 + 0x6c))(piVar1,psVar3,0,0x65,1,param_1);
  uStack_30 = 0;
  (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,0,&uStack_30,0);
  uVar4 = 0;
  if (*param_3 != 0) {
    sVar2 = 1;
    do {
      *psVar3 = sVar2 + 2;
      psVar3[1] = sVar2 + -1;
      psVar3[2] = sVar2;
      psVar3[3] = sVar2;
      psVar3[4] = sVar2 + 1;
      psVar3[5] = sVar2 + 2;
      psVar3 = psVar3 + 6;
      sVar2 = sVar2 + 4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_3);
  }
  (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1);
  return;
}

