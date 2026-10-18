/* speed.exe 00696b10 FUN_00696b10; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00696b10(int param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 2) != 0) {
    FUN_005d0370(*(undefined4 *)(param_1 + 8),(uint)*(ushort *)(param_1 + 0xc) << 4,
                 "RigidBody::Mesh::Verts");
  }
  return;
}

