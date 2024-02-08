
class GamePiece
{
    private:
    virtual bool areSquaresLegal(int srcRow, int srcCol, int destRow, int destCol, GamePiece* gameBoard[8][8]) = 0;
    char myPieceColor;
     
public:
    GamePiece(char pieceColor) : myPieceColor(pieceColor) {}
    ~GamePiece() {}
    virtual char getPiece() = 0;
    char getColor() {
        return myPieceColor;
    }
   
    bool isLegalMove(int srcRow, int srcCol, int destRow, int destCol, GamePiece* gameBoard[8][8]) {
        GamePiece* Dest = gameBoard[destRow][destCol];
        if ((Dest == 0) || (myPieceColor != Dest->getColor())) {
            return areSquare
