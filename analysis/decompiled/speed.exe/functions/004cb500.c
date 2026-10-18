/* speed.exe 004cb500 FUN_004cb500; analysis pseudocode, not buildable source.
 * calls 004cb3f0 FUN_004cb3f0
 */

void FUN_004cb500(undefined4 param_1,ushort param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_004cb3f0(param_1);
  uVar1 = DAT_00925ae8;
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)(puVar2 + 1) = *(short *)(puVar2 + 1) + 1;
    *puVar2 = uVar1;
    if (param_2 < 10) {
      if (((uint)*(ushort *)((int)puVar2 + 6) & 1 << ((byte)param_2 & 0x1f)) == 0) {
        *(ushort *)((int)puVar2 + 6) =
             (ushort)(1 << ((byte)param_2 & 0x1f)) | *(ushort *)((int)puVar2 + 6);
      }
    }
    return;
  }
  return;
}

