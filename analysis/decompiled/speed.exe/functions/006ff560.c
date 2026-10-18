/* speed.exe 006ff560 FUN_006ff560; analysis pseudocode, not buildable source.
 * calls 004ac100 thunk_FUN_004ac040
 * calls 00832ace FUN_00832ace
 */

undefined4 FUN_006ff560(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  piVar1 = param_2 + param_3 * 3;
  iVar6 = 0;
  for (piVar2 = param_2; piVar2 < piVar1; piVar2 = piVar2 + 3) {
    if (*piVar2 != 0) {
      iVar6 = iVar6 + piVar2[1];
    }
  }
  puVar3 = (undefined4 *)thunk_FUN_004ac040(iVar6,"AUD:Relocated speech headers",0);
  *param_1 = puVar3;
  for (; param_2 < piVar1; param_2 = param_2 + 3) {
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      uVar5 = param_2[1];
      puVar7 = (undefined4 *)*param_2;
      puVar8 = puVar3;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *param_2 = (int)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + param_2[1]);
      iVar6 = FUN_00832ace(*param_2);
      param_2[1] = iVar6;
    }
  }
  return 0;
}

