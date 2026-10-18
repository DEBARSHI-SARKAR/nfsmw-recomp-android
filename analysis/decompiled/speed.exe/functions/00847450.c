/* speed.exe 00847450 FUN_00847450; analysis pseudocode, not buildable source.
 * calls 00852da0 FUN_00852da0
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 * calls 0083e220 FUN_0083e220
 */

undefined4 * FUN_00847450(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1[0x233] != 0) {
    iVar2 = FUN_00852e60(param_1[0x232],param_2);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)(*(code *)*param_1)(0x11c);
      puVar4 = param_2;
      puVar5 = puVar1;
      for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = FUN_0083e220(param_1[0x233],puVar1);
      FUN_00852da0(param_1[0x232],puVar1,uVar3);
    }
    else {
      puVar1 = (undefined4 *)FUN_0083e2e0(param_1[0x233],iVar2);
    }
    puVar1[0x3e] = puVar1[0x3e] | param_2[0x3e];
  }
  return puVar1;
}

