/* speed.exe 00816820 FUN_00816820; analysis pseudocode, not buildable source.
 */

void FUN_00816820(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = param_3 * 3;
  uVar2 = *(undefined8 *)((int)param_1 + param_3);
  uVar3 = *(undefined8 *)((int)param_1 + param_3 * 2);
  uVar4 = *(undefined8 *)((int)param_1 + iVar5);
  puVar1 = (undefined8 *)((int)param_1 + param_3 * 4);
  *param_2 = *param_1;
  *(undefined8 *)((int)param_2 + param_3) = uVar2;
  *(undefined8 *)((int)param_2 + param_3 * 2) = uVar3;
  *(undefined8 *)((int)param_2 + iVar5) = uVar4;
  param_2 = (undefined8 *)((int)param_2 + param_3 * 4);
  uVar2 = *(undefined8 *)((int)puVar1 + param_3);
  uVar3 = *(undefined8 *)((int)puVar1 + param_3 * 2);
  uVar4 = *(undefined8 *)((int)puVar1 + iVar5);
  *param_2 = *puVar1;
  *(undefined8 *)((int)param_2 + param_3) = uVar2;
  *(undefined8 *)((int)param_2 + param_3 * 2) = uVar3;
  *(undefined8 *)((int)param_2 + iVar5) = uVar4;
  return;
}

