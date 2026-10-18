/* speed.exe 007fd71f FUN_007fd71f; analysis pseudocode, not buildable source.
 */

void FUN_007fd71f(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = (undefined1 *)(param_2 + 2);
  puVar2 = (undefined1 *)(param_1 + 2);
  iVar4 = 0xc;
  do {
    puVar3[-2] = puVar2[-2];
    puVar3[-1] = puVar2[-1];
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[4] = puVar2[4];
    puVar3[5] = puVar2[5];
    puVar3[6] = puVar2[6];
    puVar3[7] = puVar2[7];
    puVar3[8] = puVar2[8];
    puVar1 = puVar2 + 9;
    puVar2 = puVar2 + param_3;
    puVar3[9] = *puVar1;
    puVar3 = puVar3 + param_4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

