_still under construction ..._


## Requirements


In the table below, `M` denotes a matrix of type `T` using allocator of type `A`, `m` is a value of type `A`, `a` and `b` denote values of type `M`, `u` denotes an identifier, `r` denotes a non-constant value of type `M`, and `rv` denotes a non-const rvalue of type `M`.


| Expression  | ReturnType  | Operational Sematics  | Assertion, pre-/post-condition  | Complexity  |
|---|---|---|---|---|
| `M::value_type`  | `T`   |   | `T` is Erasable from `M`  | compile time  |
| `M::reference`  | `T&`  |   |   | compile time  |
| `M::const_reference`  | `T cosnt&`   |   |   | compile time  |
| `M::difference_type`  | signed integer type  |   | identical to the difference type of `M::iterator` and `M::const_iterator`  |  compile time |
| `M::size_type`  | unsigned integer type  |   | any type that can represent non-negative value of `difference_type`  | compile time  |
| `M::allocator_type`  | `A`  |   | `M::allocator_type::value_type` is identical to `M::value_type`  | compile time  |
| `M::iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_iterator`  | compile time  |
| `M::reverse_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<iterator>`  | compile time  |
| `M::const_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_iterator>`  | compile time  |
| `M::row_iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_row_iterator`  | compile time  |
| `M::reverse_row_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<row_iterator>`  | compile time  |
| `M::const_row_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_row_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_row_iterator>`  | compile time  |
| `M::col_iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_col_iterator`  | compile time  |
| `M::reverse_col_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<col_iterator>`  | compile time  |
| `M::const_col_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_col_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_col_iterator>`  | compile time  |
| `M::diag_iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_diag_iterator`  | compile time  |
| `M::reverse_diag_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<diag_iterator>`  | compile time  |
| `M::const_diag_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_diag_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_diag_iterator>`  | compile time  |
| `M::diag_iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_diag_iterator`  | compile time  |
| `M::reverse_diag_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<diag_iterator>`  | compile time  |
| `M::const_diag_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_diag_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_diag_iterator>`  | compile time  |
| `M::anti_diag_iterator`  | iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements, convertible to `M::const_anti_diag_iterator`  | compile time  |
| `M::reverse_anti_diag_iterator`  | iterator type whose value type is `T`  |   | `reverse_iterator<anti_diag_iterator>`  | compile time  |
| `M::const_anti_diag_iterator`  | constant iterator type whose value type is `T`  |   | any iterator category that meets the RandomAccessIterator requirements  | compile time  |
| `M::const_reverse_anti_diag_iterator` | constant iterator type whose value type is `T`   |   | `reverse_iterator<const_anti_diag_iterator>`  | compile time  |
|   |   |   |   |   |
|   |   |   |   |   |
|   |   |   |   |   |
|   |   |   |   |   |


## Header `<matrix>` synopsis

```language-cpp
namespace xxx
{

    template < typename T, class Allocator = allocator<T> >
    struct matrix
    {
    	//types:
        typedef T 								                        value_type;
        typedef Allocator                                               allocator_type;
        typedef value_type& 					                        reference;
        typedef value_type const&                                       const_reference;
        typedef implementation-defined                                  iterator;
        typedef implementation-defined                                  const_iterator;
        typedef implementation-defined                                  row_iterator;
        typedef implementation-defined                                  const_row_iterator;
        typedef implementation-defined                                  col_iterator;
        typedef implementation-defined                                  const_col_iterator;
        typedef implementation-defined                                  diag_iterator;
        typedef implementation-defined                                  const_diag_iterator;
        typedef implementation-defined                                  anti_diag_iterator;
        typedef implementation-defined                                  const_anti_diag_iterator;
        typedef implementation-defined                                  size_type;
        typedef implementation-defined                                  difference_type;
        typedef typename allocator_trait<allocator_type>::pointer       pointer;
        typedef typename allocator_trait<allocator_type>::const_pointer const_pointer;
        typedef std::reverse_iterator<iterator>                         reverse_iterator;
        typedef std::reverse_iterator<const_iterator>                   const_reverse_iterator;
        typedef std::reverse_iterator<row_iterator>                     row_reverse_iterator;
        typedef std::reverse_iterator<const_row_iterator>               const_row_reverse_iterator;
        typedef std::reverse_iterator<col_iterator>                     col_reverse_iterator;
        typedef std::reverse_iterator<const_col_iterator>               const_col_reverse_iterator;
        typedef std::reverse_iterator<diag_iterator>                    diag_reverse_iterator;
        typedef std::reverse_iterator<const_diag_iterator>              const_diag_reverse_terator;
        typedef std::reverse_iterator<anti_diag_iterator>               anti_diag_reverse_iterator;
        typedef std::reverse_iterator<const_anti_diag_iterator>         const_anti_diag_reverse_terator;


        // construct, copy and destroy
        matrix() noexcept;
        explicit matrix ( allocator_type const& ) noexcept;
        explicit matrix ( size_type row_, size_type col_, allocator_type const& = Allocator() );
        matrix( matrix const& );
        matrix( matrix&& ) noexcept;
        matrix( matrix const&, allocator_type const& );
        matrix( matrix&&, allocator_type const& );
        ~matrix();

        matrix& operator = ( matrix const& );
        matrix& operator = ( matrix && ) noexcept( allocator_traits<allocator_type>::propagate_on_container_move_assignment::value || allocator_traits<allocator_type>::is_always_equal::value );

        allocator_type get_allocator() const noexcept;


        //iterators
        iterator                                begin() noexcept;
        const_iterator                          begin() const noexcept;
        iterator                                end() noexcept;
        const_iterator                          end() const noexcept;
        row_iterator                            row_begin(size_type) noexcept;
        const_row_iterator                      row_begin(size_type) const noexcept;
        row_iterator                            row_end(size_type) noexcept;
        const_row_iterator                      row_end(size_type) const noexcept;
        col_iterator                            col_begin(size_type) noexcept;
        const_col_iterator                      col_begin(size_type) const noexcept;
        col_iterator                            col_end(size_type) noexcept;
        const_col_iterator                      col_end(size_type) const noexcept;
        diag_iterator                           diag_begin(difference_type) noexcept;
        const_diag_iterator                     diag_begin(difference_type) const noexcept;
        diag_iterator                           diag_end(difference_type) noexcept;
        const_diag_iterator                     diag_end(difference_type) const noexcept;

        //reverse iterators
        reverse_iterator                        rbegin() noexcept;
        const_reverse_iterator                  rbegin() const noexcept;
        reverse_iterator                        rend() noexcept;
        const_reverse_iterator                  rend() const noexcept;
        row_reverse_iterator                    row_rbegin(size_type) noexcept;
        const_row_reverse_iterator              row_rbegin(size_type) const noexcept;
        row_reverse_iterator                    row_rend(size_type) noexcept;
        const_row_reverse_iterator              row_rend(size_type) const noexcept;
        col_reverse_iterator                    col_rbegin(size_type) noexcept;
        const_col_reverse_iterator              col_rbegin(size_type) const noexcept;
        col_reverse_iterator                    col_rend(size_type) noexcept;
        const_col_reverse_iterator              col_rend(size_type) const noexcept;
        diag_reverse_iterator                   diag_rbegin(difference_type) noexcept;
        const_diag_reverse_iterator             diag_rbegin(difference_type) const noexcept;
        diag_reverse_iterator                   diag_rend(difference_type) noexcept;
        const_diag_reverse_iterator             diag_rend(difference_type) const noexcept;

        //const iterators
        const_iterator                          cbegin() const noexcept;
        const_iterator                          cend() const noexcept;
        const_row_iterator                      row_cbegin(size_type) const noexcept;
        const_row_iterator                      row_cend(size_type) const noexcept;
        const_col_iterator                      col_cbegin(size_type) const noexcept;
        const_col_iterator                      col_cend(size_type) const noexcept;
        const_diag_iterator                     diag_cbegin(difference_type) const noexcept;
        const_diag_iterator                     diag_cend(difference_type) const noexcept;
        const_reverse_iterator                  crbegin() const noexcept;
        const_reverse_iterator                  crend() const noexcept;
        const_row_reverse_iterator              row_crbegin(size_type) const noexcept;
        const_row_reverse_iterator              row_crend(size_type) const noexcept;
        const_col_reverse_iterator              col_crbegin(size_type) const noexcept;
        const_col_reverse_iterator              col_crend(size_type) const noexcept;
        const_diag_reverse_iterator             diag_crbegin(difference_type) const noexcept;
        const_diag_reverse_iterator             diag_crend(difference_type) const noexcept;

        //capacity and shape
        size_type                               size() const noexcept;
        size_type                               row() const noexcept;
        size_type                               col() const noexcept;
        void                                    resize( size_type row_, size_type col_ );
        void                                    resize( size_type row_, size_type col_, value_type const& value_ );
        void                                    reshape( size_type row_, size_type col_ );
        void                                    transpose();


        //element access
        iterator                                operator[](size_type row_ );
        const_iterator                          operator[](size_type row_ ) const; //TODO
        reference                               operator()( size_type row_, size_type col_ );
        const_reference                         operator()( size_type row_, size_type col_ ) const;
        reference                               at( size_type row_, size_type col_ );
        const_reference                         at( size_type row_, size_type col_ ) const;


        //data access
        pointer                                 data() noexcept;
        const_pointer                           data() const noexcept;

        //modifiers
        void                                    clean() noexcept;
        void                                    swap( matrix& ) noexcept( allocator_traits<allocator_type>::propagate_on_container_move_assignment::value || allocator_traits<allocator_type>::is_always_equal::value );

        //loader, saver and ploter
        void                                    load( string const& file_name_ );
        void                                    save_as( string const& file_name_ );
        void                                    plot( string const& file_name_ ) const;
        void                                    plot( string const& file_name_, string const& builtin_color_scheme_name_ ) const;

        //unary operators
        matrix const                            operator+() const;
        matrix const                            operator-() const;
        matrix const                            operator~() const;
        matrix const                            operator~() const; //bool only

        //computed assignment
        //TODO: return optional<matrix>?
        matrix&                                 operator*=( matrix const& );
        matrix&                                 operator/=( matrix const& );
        matrix&                                 operator+=( matrix const& );
        matrix&                                 operator-=( matrix const& );
        matrix&                                 operator*=( value_type const );
        matrix&                                 operator/=( value_type const );
        matrix&                                 operator%=( value_type const );
        matrix&                                 operator+=( value_type const );
        matrix&                                 operator-=( value_type const );
        matrix&                                 operator^=( value_type const );
        matrix&                                 operator&=( value_type const );
        matrix&                                 operator|=( value_type const );
        matrix&                                 operator<<=( value_type const );
        matrix&                                 operator>>=( value_type const );


        //basic numeric operations
        value_type                              det() const;
        value_type                              tr() const;


    };

    //building functions
    template< typename T, typename A > matrix<T,A> const make_eye( size_type row_, size_type col_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_eye( size_type row_, size_type col_ );
    template< typename T, typename A > matrix<T,A> const make_zeros( size_type row_, size_type col_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_zeros( size_type row_, size_type col_ );
    template< typename T, typename A > matrix<T,A> const make_ones( size_type row_, size_type col_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_ones( size_type row_, size_type col_ );
    template< typename T, typename A > matrix<T,A> const make_diag( matrix<T,A> const );
    template< typename T, typename A > matrix<T,A> const make_triu( matrix<T,A> const );
    template< typename T, typename A > matrix<T,A> const make_tril( matrix<T,A> const );
    template< typename T, typename A > matrix<T,A> const make_rand( size_type row_, size_type col_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_rand( size_type row_, size_type col_ );
    template< typename T, typename A > matrix<T,A> const make_hilb( size_type n_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_hilb( size_type n_ );
    template< typename T, typename A > matrix<T,A> const make_magic( size_type n_, A const& alloc_ );
    template< typename T > matrix<T,std::allocator<T>> const make_magic( size_type n_ );
    template< typename T, typename A, typename Input_Itor_1, typename Input_Iterator_2 > matrix<T, A> const make_toeplitz( Input_Iterator_1 begin_, Input_Iterator_1 end_, Input_Iterator_2 begin_2_, A const alloc_ );
    template< typename T, typename A, typename Input_Itor > matrix<T, A> const make_toeplitz( Input_Iterator begin_, Input_Iterator end_, A const alloc_ );
    template< typename T, typename Input_Itor_1, typename Input_Iterator_2 > const matrix<T, std::allocator<T> > make_toeplitz( Input_Iterator_1 begin_, Input_Iterator_1 end_, Input_Iterator_2 begin_2_ ):
    template< typename T, typename Input_Itor > matrix<T, std::allocator<T>> const make_toeplitz( Input_Iterator begin_, Input_Iterator end_ );
    template< typename T, typename A > matrix<T,A> const make_horizontal_cons( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<T,A> const make_vertical_cons( matrix<T,A> const&, matrix<T,A> const& );



    //binary operation
    //TODO: return optional<matrix>?
    template< typename T, typename A > matrix<T,A> const operator * ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<T,A> const operator * ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator * ( T const&, matrix<T,A> const& );

    template< typename T, typename A > matrix<T,A> const operator / ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<T,A> const operator / ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator / ( T const&, matrix<T,A> const& );

    template< typename T, typename A > matrix<T,A> const operator + ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<T,A> const operator + ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator + ( T const&, matrix<T,A> const& );

    template< typename T, typename A > matrix<T,A> const operator - ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<T,A> const operator - ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator - ( T const&, matrix<T,A> const& );

    template< typename T, typename A > matrix<T,A> const operator % ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator ^ ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator & ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator | ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator << ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<T,A> const operator >> ( matrix<T,A> const&, T const& );

    template< typename T, typename A > std::ostream& operator << ( std::ostream&, matrix<T,A> const& );
    template< typename T, typename A > std::istream& operator << ( std::istream&, matrix<T,A> const& );

    //logical
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator == ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator == ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator == ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator != ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator != ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator != ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator >= ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator >= ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator >= ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator <= ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator <= ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator <= ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator > ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator > ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator > ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator < ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator < ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator < ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator && ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator && ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator && ( T const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator || ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator || ( matrix<T,A> const&, T const& );
    template< typename T, typename A > matrix<bool,std::allocator_traits<A>::rebind_alloc<bool> > const operator || ( T const&, matrix<T,A> const& );


    //numeric functions
    template< typename T, typename A, typename F > matrix<T,A> const element_wise_apply ( matrix<T,A> const&, F const& f_ );

    //Linear Equations

    //mldivide 	Solve systems of linear equations Ax = B for x
    template< typename T, typename A, typename F > matrix<T,A> const mldivide ( matrix<T,A> const&, matrix<T,A> const& );
    //mrdivide 	Solve systems of linear equations xA = B for x
    template< typename T, typename A, typename F > matrix<T,A> const mrdivide ( matrix<T,A> const&, matrix<T,A> const& );
    //linsolve 	Solve linear system of equations
    template< typename T, typename A, typename F > matrix<T,A> const mrdivide ( matrix<T,A> const&, matrix<T,A> const& );
    //inv 	Matrix inverse
    template< typename T, typename A, typename F > matrix<T,A> const inv ( matrix<T,A> const& );
    //pinv 	Moore-Penrose pseudoinverse of matrix
    template< typename T, typename A, typename F > matrix<T,A> const pinv ( matrix<T,A> const& );
    //lscov 	Least-squares solution in presence of known covariance
    template< typename T, typename A, typename F > matrix<T,A> const lscov ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A, typename F > matrix<T,A> const lscov ( matrix<T,A> const&, matrix<T,A> const&, matrix<T,A> const& );
    //lsqnonneg 	Solve nonnegative linear least-squares problem
    template< typename T, typename A, typename F > matrix<T,A> const lsqnonneg ( matrix<T,A> const&, matrix<T,A> const& );
    template< typename T, typename A, typename F > matrix<T,A> const lsqnonneg ( matrix<T,A> const&, matrix<T,A> const&, matrix<T,A> const& );
    //sylvester 	Solve Sylvester equation AX + XB = C for X
    template< typename T, typename A, typename F > matrix<T,A> const sylvester ( matrix<T,A> const&, matrix<T,A> const&, matrix<T,A> const& );

    //Eigenvalues ans Singular Values

    //eig 	Eigenvalues and eigenvectors
    template< typename T, typename A, typename F > std::tuple<matrix<T,A>,matrix<T,A>> const eig( matrix<T,A> const& );
    //eigs 	Subset of eigenvalues and eigenvectors -- TODO
    //balance 	Diagonal scaling to improve eigenvalue accuracy
    //svd 	Singular value decomposition
    template< typename T, typename A, typename F > std::tuple<matrix<T,A>,matrix<T,A>,matrix<T,A>> const svd( matrix<T,A> const& );
    //svds 	Subset of singular values and vectors -- TODO
    //gsvd 	Generalized singular value decomposition
    template< typename T, typename A, typename F > std::tuple<matrix<T,A>,matrix<T,A>,matrix<T,A>,matrix<T,A>> const gsvd( matrix<T,A> const&, matrix<T,A> const& );
    //ordeig 	Eigenvalues of quasitriangular matrices
    template< typename T, typename A, typename F > matrix<T,A> const ordeig( matrix<T,A> const& );
    template< typename T, typename A, typename F > matrix<T,A> const ordeig( matrix<T,A> const&, matrix<T,A> const& );



}

//linear algebra
/*
ordqz 	Reorder eigenvalues in QZ factorization
ordschur 	Reorder eigenvalues in Schur factorization
polyeig 	Polynomial eigenvalue problem
qz 	QZ factorization for generalized eigenvalues
hess 	Hessenberg form of matrix
schur 	Schur decomposition
rsf2csf 	Convert real Schur form to complex Schur form
cdf2rdf 	Convert complex diagonal form to real block diagonal form
lu 	LU matrix factorization
ldl 	Block LDL' factorization for Hermitian indefinite matrices
chol 	Cholesky factorization
cholupdate 	Rank 1 update to Cholesky factorization
qr 	Orthogonal-triangular decomposition
qrdelete 	Remove column or row from QR factorization
qrinsert 	Insert column or row into QR factorization
qrupdate 	Rank 1 update to QR factorization
planerot 	Givens plane rotation
transpose 	Transpose vector or matrix
ctranspose 	Complex conjugate transpose
mtimes 	Matrix Multiplication
mpower 	Matrix power
sqrtm 	Matrix square root
expm 	Matrix exponential
logm 	Matrix logarithm
funm 	Evaluate general matrix function
kron 	Kronecker tensor product
cross 	Cross product
dot 	Dot product
bandwidth 	Lower and upper matrix bandwidth
tril 	Lower triangular part of matrix
triu 	Upper triangular part of matrix
isbanded 	Determine if matrix is within specific bandwidth
isdiag 	Determine if matrix is diagonal
ishermitian 	Determine if matrix is Hermitian or skew-Hermitian
issymmetric 	Determine if matrix is symmetric or skew-symmetric
istril 	Determine if matrix is lower triangular
istriu 	Determine if matrix is upper triangular
norm 	Vector and matrix norms
normest 	2-norm estimate
cond 	Condition number with respect to inversion
condest 	1-norm condition number estimate
rcond 	Reciprocal condition number
condeig 	Condition number with respect to eigenvalues
det 	Matrix determinant
null 	Null space
orth 	Orthonormal basis for range of matrix
rank 	Rank of matrix
rref 	Reduced row echelon form (Gauss-Jordan elimination)
trace 	Sum of diagonal elements
subspace 	Angle between two subspaces
cosm
sinm
tanm
ctanm
acosm
asinm
atanm
atan2m
coshm
sinhm
tanhm
acosh
asinh
atanh
expm -- expm(A) and expm(A, B)
logm
log10m
exp2m
log2m
logm
powm
sqrtm
cbrtm
hypotm
erfm
erfcm
tgammam
lgammam


//trigonometric
sin
cos
tan
cot
sec
csc

arcsin
arccos
arctan
arccot
arcsec
arccsc


//hyperbolic
sinh
cosh
tanh
coth
sech
csch
arsinh
arcosh
artanh
arsech
arcsch
arcoth
*/


//Fourier Analysis and Filtering
/*
fft
fftshift
ifft
ifftshift
conv
filter
ss2tf
*/

```
