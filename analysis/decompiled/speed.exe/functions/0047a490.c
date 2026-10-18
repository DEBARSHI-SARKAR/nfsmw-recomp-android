/* speed.exe 0047a490 FUN_0047a490; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 0046a040 FUN_0046a040
 * calls 0047a2f0 FUN_0047a2f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047a490(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  FUN_0046a040(local_50);
  FUN_006bde60(local_90,local_50);
  if ((*(int *)(param_1 + 4) != 0) &&
     (cVar3 = FUN_0047a2f0(local_90,*(int *)(param_1 + 4),&DAT_008ed43c), cVar3 == '\0')) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 == 0) || (iVar1 == 0x7fffffff)) ||
      (_DAT_00894820 <= (float)(DAT_00925ae8 - iVar1) * _DAT_00890984)) &&
     (piVar4 = DAT_0092ce9c, DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4)) {
    do {
      piVar2 = (int *)*piVar4;
      cVar3 = (**(code **)(*piVar2 + 0x88))();
      if (((cVar3 != '\0') &&
          ((*(int **)(param_1 + 4) == (int *)0x0 || (piVar2 != *(int **)(param_1 + 4))))) &&
         (cVar3 = FUN_0047a2f0(local_90,piVar2,&DAT_008ed424), cVar3 != '\0')) {
        *(int **)(param_1 + 4) = piVar2;
        *(int *)(param_1 + 8) = DAT_00925ae8;
        break;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != DAT_0092ce9c + DAT_0092cea4);
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}

