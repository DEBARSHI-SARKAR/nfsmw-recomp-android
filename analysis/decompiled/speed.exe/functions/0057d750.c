/* speed.exe 0057d750 FUN_0057d750; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 0056a670 FUN_0056a670
 * calls 00515b90 FUN_00515b90
 * calls 00524850 FUN_00524850
 * calls 00514d10 FUN_00514d10
 * calls 0056bb80 FUN_0056bb80
 * calls 0056dea0 FUN_0056dea0
 * calls 005252d0 FUN_005252d0
 * calls 00514cc0 FUN_00514cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057d750(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  *(float *)(param_1 + 0x30) = param_4 + *(float *)(param_1 + 0x30);
  FUN_0056a670(param_2,param_3);
  uVar1 = FUN_0056dea0(param_3,param_2);
  FUN_00515b90(*(undefined4 *)(param_1 + 0x2c),uVar1);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe526d0d2,&DAT_008941f8,param_5);
  if (param_4 <= _DAT_00890968) {
    uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe1045a4f);
    FUN_00514c70(uVar1);
  }
  else {
    uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe1045a4f);
    FUN_00514cc0(uVar1);
  }
  iVar2 = FUN_0056bb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0056bb80();
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xe1045a4f,"%s: %$0.0f",iVar2,(double)param_4);
  iVar2 = FUN_0056bb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0056bb80();
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x324f7792,"%s: %$0.0f",iVar2,
               (double)*(float *)(param_1 + 0x30));
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x5079c8f8,1);
  return;
}

