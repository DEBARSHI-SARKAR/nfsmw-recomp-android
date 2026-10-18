/* speed.exe 00417340 FUN_00417340; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00417340(int *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puStack_38;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_2 + 0x98);
  local_4 = *(undefined4 *)(param_2 + 0xa0);
  local_8 = *(float *)(param_2 + 0x9c) + param_3;
  puStack_38 = &local_c;
  (**(code **)(param_1[-0x1d6] + 0x3c))();
  (**(code **)(*param_1 + 0xc))
            (*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c),
             *(undefined4 *)(param_2 + 0xa0));
  (**(code **)(param_1[-0x1d6] + 0x38))(local_4);
  if (((char)local_4 == '\0') && (*(char *)(param_2 + 0x50) != '\0')) {
    puStack_38 = *(undefined4 **)(param_2 + 0xbc);
    fVar1 = *(float *)(param_2 + 0xc0);
    fVar2 = *(float *)(param_2 + 0xc4);
    FUN_0040fe20(&puStack_38,&puStack_38);
    piVar3 = (int *)(**(code **)(*(int *)param_1[-0x1dc] + 0x54))();
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x24))();
    if (_DAT_00890968 <= pfVar4[1] * fVar1 + *pfVar4 * (float)puStack_38 + pfVar4[2] * fVar2) {
      (**(code **)(*param_1 + 0x14))(&stack0xffffffd4);
      return;
    }
  }
  (**(code **)(*param_1 + 0x14))(&DAT_008a2fb4);
  return;
}

