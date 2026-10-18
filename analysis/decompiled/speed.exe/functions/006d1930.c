/* speed.exe 006d1930 FUN_006d1930; analysis pseudocode, not buildable source.
 * calls 006d1260 FUN_006d1260
 */

void FUN_006d1930(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int *piStack_10;
  int *piStack_c;
  
  piVar1 = DAT_00982c80;
  DAT_00982bc8 = param_3;
  if (DAT_00982c80 != (int *)0x0) {
    piStack_c = (int *)0x6d194e;
    (**(code **)(*DAT_00982c80 + 8))();
    piStack_c = (int *)piVar1[0x12];
    piStack_10 = (int *)0x6d195a;
    (**(code **)(*piStack_c + 0x10c))();
  }
  piVar3 = DAT_0093dea0;
  DAT_00982c80 = DAT_0093dea0;
  piStack_c = (int *)0x6d196d;
  (**(code **)(*DAT_0093dea0 + 4))();
  piStack_c = (int *)piVar3[0x13];
  piStack_10 = DAT_00982bdc;
  uStack_14 = 0x6d197f;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_1c = (int *)piVar3[0x12];
  uStack_14 = 0;
  puStack_18 = (undefined1 *)&param_1;
  uStack_20 = 0x6d1992;
  (**(code **)(*piStack_1c + 0xfc))();
  uStack_20 = *(undefined4 *)(*DAT_00982bc8 + 0x18);
  (**(code **)(*(int *)DAT_00982c80[0x12] + 0xd0))
            ((int *)DAT_00982c80[0x12],*(undefined4 *)(DAT_00982c80[0x11] + 0x4ac));
  puVar2 = puStack_18;
  piVar3 = piStack_10;
  puStack_18[0x56] = 1;
  FUN_006d1260(piStack_1c,puVar2,piVar3);
  piVar3 = DAT_0093dea0;
  (**(code **)(*DAT_0093dea0 + 8))();
  (**(code **)(*(int *)piVar3[0x12] + 0x10c))((int *)piVar3[0x12]);
  DAT_00982c80 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    DAT_00982c80 = piVar1;
    (**(code **)(*piVar1 + 4))();
    (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar1[0x13]);
    (**(code **)(*(int *)piVar1[0x12] + 0xfc))((int *)piVar1[0x12],&uStack_20,0);
  }
  DAT_00982bc8 = (int *)0x0;
  return;
}

