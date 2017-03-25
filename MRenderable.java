/* NIM/Nama :  */
/* File     : MRenderable.java */

class MRenderable implements Renderable {
  MRenderable(){}

  @Override
  public String render(){
    return ANSI_RED + 'a' + ANSI_RESET;
  }

  public static void main(String[] args) {
    MRenderable tes = new MRenderable();
    System.out.println(tes.render());
  }

}
