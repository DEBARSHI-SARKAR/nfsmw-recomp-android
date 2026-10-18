/* speed.exe 0066af60 FUN_0066af60; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0066af60(int param_1,float param_2)

{
  float fVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  fVar1 = *(float *)(param_1 + 0xd4);
  puVar3 = (undefined4 *)
           CONCAT22((short)((uint)in_EAX >> 0x10),
                    (ushort)(fVar1 < _DAT_00890968) << 8 |
                    (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                    (ushort)(fVar1 == _DAT_00890968) << 0xe);
  if (fVar1 >= _DAT_00890968 && (fVar1 == _DAT_00890968) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x34) + 0x2c))();
    if ((char)uVar2 == '\0') {
      param_2 = *(float *)(param_1 + 0xd4) - param_2;
      *(float *)(param_1 + 0xd4) = param_2;
      puVar3 = (undefined4 *)
               CONCAT22((short)((uint)uVar2 >> 0x10),
                        (ushort)(param_2 < _DAT_00890968) << 8 |
                        (ushort)(NAN(param_2) || NAN(_DAT_00890968)) << 10 |
                        (ushort)(param_2 == _DAT_00890968) << 0xe);
      if (param_2 < _DAT_00890968) {
        *(undefined4 *)(param_1 + 0xd4) = 0;
        return CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_00454810(0xc141f7f8,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_006269b0(4);
      }
      *(undefined4 *)(param_1 + 0xd4) = *puVar3;
    }
  }
  return (uint)puVar3 & 0xffffff00;
}

