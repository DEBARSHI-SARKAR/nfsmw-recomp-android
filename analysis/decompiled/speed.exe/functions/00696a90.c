/* speed.exe 00696a90 FUN_00696a90; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

int __thiscall
FUN_00696a90(int param_1,int param_2,undefined4 *param_3,undefined2 param_4,undefined4 param_5,
            char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = param_5;
  if (param_6 != '\0') {
    *(undefined4 **)(param_1 + 8) = param_3;
    return param_1;
  }
  puVar1 = (undefined4 *)
           FUN_005d29d0((uint)*(ushort *)(param_1 + 0xc) << 4,"RigidBody::Mesh::Verts");
  *(undefined4 **)(param_1 + 8) = puVar1;
  for (iVar2 = (uint)*(ushort *)(param_1 + 0xc) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 2;
  return param_1;
}

