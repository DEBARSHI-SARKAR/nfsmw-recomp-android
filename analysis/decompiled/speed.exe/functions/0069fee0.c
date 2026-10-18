/* speed.exe 0069fee0 FUN_0069fee0; analysis pseudocode, not buildable source.
 * calls 0048aee0 FUN_0048aee0
 * calls 0069d4d0 FUN_0069d4d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069fee0(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  FUN_0069d4d0(param_2,param_3);
  if (*(int *)(param_1 + 0xd0) != 0) {
    cVar1 = FUN_0048aee0(*(int *)(param_1 + 0xd0) + 8);
    if (cVar1 == '\0') {
      *(undefined4 *)((int)param_3 + 0x7c) = 0;
      *(undefined4 *)((int)param_3 + 0x5c) = 0;
      *(undefined4 *)((int)param_3 + 0x4c) = 0;
      *(undefined4 *)((int)param_3 + 0x70) = DAT_008a2fb4;
      *(undefined4 *)((int)param_3 + 0x74) = DAT_008a2fb8;
      uVar2 = DAT_008a2fbc;
      goto LAB_0069ffb7;
    }
  }
  fVar3 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 100))(2);
  fVar4 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 100))(0);
  if (fVar4 <= (float10)param_3) {
    fVar4 = (float10)param_3;
  }
  *(undefined4 *)((int)param_3 + 0x70) = 0;
  *(float *)((int)param_3 + 0x74) =
       (float)((float10)(float)fVar3 - (fVar4 + (float10)*(float *)((int)param_3 + 0x84)));
  uVar2 = 0;
LAB_0069ffb7:
  *(undefined4 *)((int)param_3 + 0x78) = uVar2;
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x38))((int)param_3 + 0x70);
  return;
}

