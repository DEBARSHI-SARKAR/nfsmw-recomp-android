/* speed.exe 00697050 FUN_00697050; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __fastcall FUN_00697050(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  if ((*(byte *)(**(int **)(param_1 + 0x78) + 0x1c) >> 1 & 1) != 0) {
    pbVar1 = (byte *)(**(int **)(param_1 + 0x78) + 0x1c);
    *pbVar1 = *pbVar1 & 0xfd;
    piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x48) + 4))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x74))();
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      fVar4 = (float10)FUN_006e8de0(0,2);
      (**(code **)(iVar2 + 0x34))(0xc91b90d9,(float)fVar4);
    }
  }
  return;
}

