/* speed.exe 0057d6a0 FUN_0057d6a0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00573140 FUN_00573140
 */

void __thiscall FUN_0057d6a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_00573140("LINE%d_GROUP",*(undefined4 *)(param_1 + 0xc),0x1744b3,1);
  FUN_00524920(*(undefined4 *)(param_1 + 0x14),uVar2);
  if (param_2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(param_2 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = piVar3;
  *(int **)(param_1 + 8) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = param_1 + 4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

